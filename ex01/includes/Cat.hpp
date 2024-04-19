#ifndef EX01_CAT_HPP_
#define EX01_CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
  Brain *brain_;

public:
  Cat(void);
  Cat(const Cat &other);
  Cat &operator=(const Cat &other);
  ~Cat(void);
  void makeSound(void) const;
};

#endif
