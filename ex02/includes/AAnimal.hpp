#ifndef EX02_AANIMAL_HPP_
#define EX02_AANIMAL_HPP_

#include <iostream>

class AAnimal
{
protected:
  std::string type_;

public:
  AAnimal(void);
  AAnimal(const AAnimal &other);
  virtual AAnimal &operator=(const AAnimal &other);
  virtual ~AAnimal(void) = 0;
  const std::string &getType(void) const;
  void setType(const std::string &type);
  virtual void makeSound(void) const = 0;
};

#endif
