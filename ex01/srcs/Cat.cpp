#include "Cat.hpp"

Cat::Cat() : Animal(), brain_(new Brain()) {
	this->type_ = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	std::cout << "Cat copy assignment operator called" << std::endl; 
	if (this != &other) {
		Animal::operator=(other);
		*this->brain_ = *other.brain_;
	}
	return (*this);
}

Cat::~Cat() {
	delete this->brain_;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow... Hiss!" << std::endl; 
}
