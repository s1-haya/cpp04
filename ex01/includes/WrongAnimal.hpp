#ifndef EX01_WRONGANIMAL_HPP_
#define EX01_WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
protected:
  std::string type_;

public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &other);
  virtual ~WrongAnimal(void);
  std::string getType(void) const;
  void setType(std::string type);
  virtual void makeSound(void) const;
};

#endif
