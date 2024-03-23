#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog Default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog( const Dog& other ) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=( const Dog& other ) {
	std::cout << "Dog Copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl; 
}

void Dog::makeSound() const {
	std::cout << "Yap! Yap! Yap!" << std::endl;
}
