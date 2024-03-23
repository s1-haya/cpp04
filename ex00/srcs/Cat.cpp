#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat Default constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat( const Cat& other ) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=( const Cat& other ) {
	std::cout << "Cat Copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Meow! Meow... Hiss!" << std::endl; 
}

void Cat::makeSound() const {
	std::cout << "Cat Sound!" << std::endl;
}
