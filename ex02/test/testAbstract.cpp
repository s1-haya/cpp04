#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);

#define SIZE 5

/*
test:
- the default Animal class should not be instantiable.
- Abstract class error case
*/

void testAbstract(void)
{
  testTitle("Abstract");
  // error: return type 'AAnimal' is an abstract class
  // AAnimal animal( void );
  // static_cast<AAnimal>(cat);
  // error: allocating an object of abstract class type 'AAnimal'
  // AAnimal* animal = new AAnimal( void );
  // error: variable type 'AAnimal' is an abstract class
  // AAnimal tmp = new Cat( void );
  Cat cat;
  Dog dog;

  // ok: reference, pointer
  AAnimal &i(AAnimal &);
  AAnimal *animal;
  animal = new Cat();
  std::cout << animal << std::endl;
  animal->makeSound();
  delete animal;
}
