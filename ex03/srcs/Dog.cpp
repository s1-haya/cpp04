#include "Dog.hpp"

Dog::Dog() : AbstractAnimal(), brain_(new Brain()) {
	std::cout << "Dog default constructor called" << std::endl;
	this->setType("Dog");
}

Dog::Dog( const Dog& other ) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=( const Dog& other ) {
	std::cout << "Dog copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain_;
}

void Dog::makeSound() const {
	std::cout << "Yap! Yap! Yap!" << std::endl;
}
