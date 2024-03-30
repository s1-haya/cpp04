#include "Dog.hpp"

Dog::Dog() : Animal(), brain_(new Brain()){
	this->type_ = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& other ) {
	std::cout << "Dog copy assignment operator called" << std::endl; 
	if (this != &other) {
		Animal::operator=(other);
		*this->brain_ = *other.brain_;
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
