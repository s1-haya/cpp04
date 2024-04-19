#ifndef EX01_ANIMAL_HPP_
#define EX01_ANIMAL_HPP_

#include <iostream>

class Animal {
protected:
  std::string type_;

public:
  Animal(void);
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  virtual ~Animal(void);
  const std::string &getType(void) const;
  void setType(const std::string &type);
  virtual void makeSound(void) const;
};

#endif
