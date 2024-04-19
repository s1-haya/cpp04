#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void testTitle(const std::string title);

/*
test: WrongAnimal, WrongCat
output getType, makeSound( void )

expected: the WrongCat should output the WrongAnimal sound.
ex) WrongAnimal: WrongAnimal Sound!
    WrongCat   : WrongAnimal Sound!
*/

void testAllocateWrongVer(void)
{
  testTitle("Allocate Correct Wrong class");
  const WrongAnimal *newAnimal = new WrongAnimal();
  std::cout << newAnimal->getType() << " ";
  newAnimal->makeSound();
  delete (newAnimal);

  const WrongAnimal *newCat = new WrongCat();
  std::cout << newCat->getType() << " ";
  newCat->makeSound();
  delete (newCat);
}

void testNotAllocateWrongVer(void)
{
  testTitle("Not Allocate Correct Wrong class");
  WrongAnimal animal;
  std::cout << animal.getType() << " ";
  animal.makeSound();

  WrongCat cat;
  std::cout << cat.getType() << " ";
  cat.makeSound();
}

void testWrongclass(void)
{
  testAllocateWrongVer();
  testNotAllocateWrongVer();
}
