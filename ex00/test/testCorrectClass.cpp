#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);

/*
test:
- Constructors and destructors of each class must display specific messages
- the Dog’s type will be initialized to "Dog"
- the Cat’s type will be initialized to "Cat"
*/

void testAllocateCorrectVer(void) {
  testTitle("Allocate Correct Class");
  const Animal *newAnimal = new Animal(void);
  std::cout << newAnimal->getType(void) << " ";
  newAnimal->makeSound(void);
  delete (newAnimal);

  const Animal *newCat = new Cat(void);
  std::cout << newCat->getType(void) << " ";
  newCat->makeSound(void);
  delete (newCat);

  const Animal *newDog = new Dog(void);
  std::cout << newDog->getType(void) << " ";
  newDog->makeSound(void);
  delete (newDog);
}

void testNotAllocateCorrectVer(void) {
  testTitle("Not Allocate Correct Class");
  Animal animal;
  std::cout << animal.getType(void) << " ";
  animal.makeSound(void);

  Cat cat;
  std::cout << cat.getType(void) << " ";
  cat.makeSound(void);

  Dog dog;
  std::cout << dog.getType(void) << " ";
  dog.makeSound(void);
}

void testCorrectClass(void) {
  testNotAllocateCorrectVer(void);
  testAllocateCorrectVer(void);
}
