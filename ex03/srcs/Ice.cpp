#include "Ice.hpp"

Ice::Ice( void ) : AMateria() {
	this->type_ = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice( const Ice& other ) : AMateria() {
	this->type_ = other.type_;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=( const Ice& other ) {
	if (this != &other) {
		this->type_ = other.type_;
	}
	std::cout << "Ice copy assignment operator called" << std::endl; 
	return (*this);
}

Ice::~Ice( void ) {
	std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone( void ) const {
	return (new Ice(*this));
}

void Ice::use( ICharacter& target ) {
	std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}
