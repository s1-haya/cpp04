#include "Cat.hpp"

Cat::Cat() : AAnimal(), brain_(new Brain()) {
	this->type_ = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat& other ) : AAnimal(other), brain_(new Brain(*other.brain_)){
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& other ) {
	if (this != &other) {
		this->AAnimal::operator=(other);
		delete this->brain_;
		this->brain_ = new Brain(*other.brain_);
	}
	std::cout << "Cat copy assignment operator called" << std::endl; 
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain_;
}

void Cat::makeSound() const {
	std::cout << "Meow! Meow... Hiss!" << std::endl; 
}
