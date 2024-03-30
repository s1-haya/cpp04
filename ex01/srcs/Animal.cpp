#include "Animal.hpp"

Animal::Animal() : type_("Default type") {
	std::cout << "Animal default constructor called" << std::endl; 
}

Animal::Animal( const Animal& other ) {
	this->type_ = other.type_;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=( const Animal& other ) {
	std::cout << "Animal copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl; 
}

void Animal::makeSound() const {
	std::cout << "Animal Sound!" << std::endl;
}

const std::string& Animal::getType() const {
	return (this->type_);
}

void Animal::setType( const std::string& type ) {
	this->type_ = type;
}
