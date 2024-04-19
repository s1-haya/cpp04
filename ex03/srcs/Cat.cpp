#include "Cat.hpp"

Cat::Cat(void) : AAnimal(), brain_(new Brain())
{
	this->type_ = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other), brain_(new Brain(*other.brain_))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		*this->brain_ = *other.brain_;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain_;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow! Meow... Hiss!" << std::endl;
}
