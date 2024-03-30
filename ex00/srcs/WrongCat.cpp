#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat( const WrongCat& other ) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=( const WrongCat& other ) {
	std::cout << "WrongCat copy assignment operator called" << std::endl; 
	if (this != &other) {
		this->type_ = other.type_;
	}
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl; 
}
