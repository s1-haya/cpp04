#include "Animal.hpp"

Animal::Animal() : type_("Default type") {
	std::cout << "Animal Default constructor called" << std::endl; 
}

Animal::Animal( const Animal& other ) {
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=( const Animal& other ) {
	std::cout << "Animal Copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl; 
}

void Animal::makeSound() const {
	std::cout << "Animal Sound!" << std::endl;
}

std::string Animal::getType() const {
	return (this->type_);
}

void Animal::setType( std::string type ) {
	this->type_ = type;
}
