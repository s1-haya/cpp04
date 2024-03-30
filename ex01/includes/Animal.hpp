#ifndef EX01_ANIMAL_HPP_
#define EX01_ANIMAL_HPP_

#include <iostream>

class Animal{
protected:
	std::string type_;
public:
	Animal();
	Animal( const Animal& other );
	Animal& operator=( const Animal& other );
	virtual ~Animal();
	const std::string& getType() const;
	void setType( const std::string& type );
	virtual void makeSound() const;
};

#endif
