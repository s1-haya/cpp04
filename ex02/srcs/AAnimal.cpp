#include "AAnimal.hpp"

AAnimal::AAnimal() : type_("default") {
	std::cout << "AAnimal default constructor called" << std::endl; 
}

AAnimal::AAnimal( const AAnimal& other ) {
	this->type_ = other.type_;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=( const AAnimal& other ) {
	if (this != &other) {
		this->type_ = other.type_;
	}
	std::cout << "AAnimal copy assignment operator called" << std::endl; 
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl; 
}

const std::string& AAnimal::getType() const {
	return (this->type_);
}

void AAnimal::setType( const std::string& type ) {
	this->type_ = type;
}
