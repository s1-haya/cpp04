#include "Dog.hpp"

Dog::Dog(void) : AAnimal(), brain_(new Brain())
{
	this->type_ = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other), brain_(new Brain(*other.brain_))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		*this->brain_ = *other.brain_;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain_;
}

void Dog::makeSound(void) const
{
	std::cout << "Yap! Yap! Yap!" << std::endl;
}
