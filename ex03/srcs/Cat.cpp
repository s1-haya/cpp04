#include "Cat.hpp"

Cat::Cat() : AbstractAnimal(), brain_(new Brain()) {
	std::cout << "Cat default constructor called" << std::endl;
	this->setType("Cat");
}

Cat::Cat( const Cat& other ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=( const Cat& other ) {
	std::cout << "Cat copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain_;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow... Hiss!" << std::endl; 
}

