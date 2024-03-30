#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("Default type") {
	std::cout << "AAnimal default constructor called" << std::endl; 
}

AAnimal::AAnimal( const AAnimal& other ) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=( const AAnimal& other ) {
	std::cout << "AAnimal copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl; 
}

std::string AAnimal::getType() const {
	return (this->type_);
}

void AAnimal::setType( const std::string& type ) {
	this->type_ = type;
}
