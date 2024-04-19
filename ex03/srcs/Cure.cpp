#include "Cure.hpp"

Cure::Cure( void ) : AMateria() {
	this->type_ = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure( const Cure& other ) : AMateria() {
	this->type_ = other.type_;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=( const Cure& other ) {
	if (this != &other) {
		this->type_ = other.type_;
	}
	std::cout << "Cure copy assignment operator called" << std::endl; 
	return (*this);
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone( void ) const {
	return (new Cure( *this ));
}

void Cure::use( ICharacter& target ) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
