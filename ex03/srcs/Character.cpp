#include "Character.hpp"

Character::Character(void) : name_("default") {
	for (int i = 0; i < MAX_MATERIAS; i++)
		this->materias_[i] = 0;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const std::string &name) : name_(name) {
	for (int i = 0; i < MAX_MATERIAS; i++)
		this->materias_[i] = 0;
	std::cout << "Character name constructor called" << std::endl;
}

Character::Character(const Character &other) : name_(other.name_) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (other.materias_[i])
			this->materias_[i] = other.materias_[i]->clone();
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character &Character::operator=(const Character &other) {
	if (this != &other) {
		for (int i = 0; i < MAX_MATERIAS; i++) {
			if (this->materias_[i]) {
				delete this->materias_[i];
				this->materias_[i] = 0;
			}
			if (other.materias_[i])
				this->materias_[i] = other.materias_[i]->clone();
		}
	}
	std::cout << "Character assignation operator called" << std::endl;
	return (*this);
}

Character::~Character(void) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias_[i])
			delete this->materias_[i];
	}
	std::cout << "Character: Destructor called" << std::endl;
}

const std::string &Character::getName(void) const { return (this->name_); }

void Character::equip(AMateria *materia) {
	if (materia == NULL) {
		std::cout << "Can't learn because the materia is NULL" << std::endl;
		return ;
	}
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias_[i] == materia) {
			std::cout << this->name_ << " is already equip " << "Materia " << materia->getType() << "( " << this->materias_[i] << " )" << std::endl;
			return ;
	}
	if (this->materias_[i] == 0) {
		this->materias_[i] = materia;
		std::cout << this->name_ << " equip with Materia " << materia->getType() << "( " << this->materias_[i] << " )" << std::endl;
		return;
	}
	}
	std::cout << "Can't learn more than 4 Materia" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= MAX_MATERIAS || this->materias_[idx] == 0) {
		std::cout << this->name_ << " is don't equip this materias" << std::endl;
		return;
	}
	std::cout << this->name_ << " unequip with Materia " <<  this->materias_[idx]->getType() << "( " << this->materias_[idx] << " )" << std::endl;
	this->materias_[idx] = 0;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= MAX_MATERIAS || this->materias_[idx] == 0) {
		std::cout << this->name_ << " is don't equip this materias" << std::endl;
		return ;
	}
	this->materias_[idx]->use(target);
}
