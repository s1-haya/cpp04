#ifndef EX03_WRONGANIMAL_HPP_
#define EX03_WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal{
protected:
	std::string type_;
public:
	WrongAnimal();
	WrongAnimal( const WrongAnimal& other );
	WrongAnimal& operator=( const WrongAnimal& other );
	virtual ~WrongAnimal();
	std::string getType() const;
	void setType( std::string type );
	virtual void makeSound() const;
};

#endif
