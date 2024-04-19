#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type_("Default type") {
	std::cout << "WrongAnimal default constructor called" << std::endl; 
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
	std::cout << "WrongAnimal copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl; 
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal Sound!" << std::endl;
}

std::string WrongAnimal::getType( void ) const {
	return (this->type_);
}

void WrongAnimal::setType( std::string type ) {
	this->type_ = type;
}
