#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type_ = "Dog";
	this->brain_ = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal() {
	this->type_ = other.type_;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	std::cout << "Dog copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

Dog::~Dog() {
	delete this->brain_;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Yap! Yap! Yap!" << std::endl;
}
