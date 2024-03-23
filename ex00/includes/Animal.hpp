#ifndef EX00_ANIMAL_HPP_
#define EX00_ANIMAL_HPP_

#include <iostream>

class Animal{
protected:
	std::string type_;
public:
	Animal();
	Animal( const Animal& other );
	Animal& operator=( const Animal& other );
	virtual ~Animal();
	std::string getType() const;
	void setType( std::string type );
	virtual void makeSound() const;
};

#endif
