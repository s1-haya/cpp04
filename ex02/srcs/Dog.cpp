#include "Dog.hpp"

Dog::Dog() : AAnimal(), brain_(new Brain()) {
	this->type_  = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog& other ) : AAnimal(), brain_(new Brain(*other.brain_)) {
	this->AAnimal::operator=(other);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	if (this != &other) {
		this->AAnimal::operator=(other);
		delete this->brain_;
		this->brain_ = new Brain(*other.brain_);
	}
	std::cout << "Dog copy assignment operator called" << std::endl; 
	return (*this);
}

Dog::~Dog() {
	delete this->brain_;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Yap! Yap! Yap!" << std::endl;
}
