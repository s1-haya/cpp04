#ifndef EX00_DOG_HPP_
#define EX00_DOG_HPP_

#include "Animal.hpp"

class Dog: public Animal{
public:
	Dog();
	Dog( const Dog& other );
	Dog& operator=( const Dog& other );
	~Dog();
	void makeSound() const;
};

#endif