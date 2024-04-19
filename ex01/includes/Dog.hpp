#ifndef EX01_DOG_HPP_
#define EX01_DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
  Brain *brain_;

public:
  Dog(void);
  Dog(const Dog &other);
  Dog &operator=(const Dog &other);
  ~Dog(void);
  void makeSound(void) const;
};

#endif
