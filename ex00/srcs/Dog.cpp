#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
  this->type_ = "Dog";
  std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
  Animal::operator=(other);
  std::cout << "Dog copy assignment operator called" << std::endl;
  return (*this);
}

Dog::~Dog(void) { std::cout << "Dog destructor called" << std::endl; }

void Dog::makeSound(void) const { std::cout << "Yap! Yap! Yap!" << std::endl; }
