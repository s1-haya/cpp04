#ifndef EX03_DOG_HPP_
#define EX03_DOG_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
private:
	Brain* brain_;
public:
	Dog();
	Dog( const Dog& other );
	Dog& operator=( const Dog& other );
	~Dog();
	void makeSound() const;
};

#endif
