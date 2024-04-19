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
  const WrongAnimal *newAnimal = new WrongAnimal(void);
  std::cout << newAnimal->getType(void) << " ";
  newAnimal->makeSound(void);
  delete (newAnimal);

  const WrongAnimal *newCat = new WrongCat(void);
  std::cout << newCat->getType(void) << " ";
  newCat->makeSound(void);
  delete (newCat);
}

void testNotAllocateWrongVer(void)
{
  testTitle("Not Allocate Correct Wrong class");
  WrongAnimal animal;
  std::cout << animal.getType(void) << " ";
  animal.makeSound(void);

  WrongCat cat;
  std::cout << cat.getType(void) << " ";
  cat.makeSound(void);
}

void testWrongclass(void)
{
  testAllocateWrongVer(void);
  testNotAllocateWrongVer(void);
}
