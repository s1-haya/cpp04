#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
  this->type_ = "Cat";
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
  Animal::operator=(other);
  std::cout << "Cat copy assignment operator called" << std::endl;
  return (*this);
}

Cat::~Cat(void) { std::cout << "Cat destructor called" << std::endl; }

void Cat::makeSound(void) const
{
  std::cout << "Meow! Meow... Hiss!" << std::endl;
}
