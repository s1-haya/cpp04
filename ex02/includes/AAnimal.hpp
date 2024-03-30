#ifndef EX02_ABSTRACTANIMAL_HPP_
#define EX02_ABSTRACTANIMAL_HPP_

#include <iostream>

class AAnimal{
protected:
	std::string type_;
public:
	AAnimal();
	AAnimal( const AAnimal& other );
	virtual AAnimal& operator=( const AAnimal& other );
	virtual ~AAnimal() = 0;
	const std::string& getType() const;
	void setType( const std::string& type );
	virtual void makeSound() const = 0;
};

#endif
