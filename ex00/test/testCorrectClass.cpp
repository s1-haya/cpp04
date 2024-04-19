#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);

/*
test:
- Constructors and destructors of each class must display specific messages
- the Dog’s type will be initialized to "Dog"
- the Cat’s type will be initialized to "Cat"
*/

void testAllocateCorrectVer(void)
{
  testTitle("Allocate Correct class");
  const Animal *newAnimal = new Animal();
  std::cout << newAnimal->getType() << " ";
  newAnimal->makeSound();
  delete (newAnimal);

  const Animal *newCat = new Cat();
  std::cout << newCat->getType() << " ";
  newCat->makeSound();
  delete (newCat);

  const Animal *newDog = new Dog();
  std::cout << newDog->getType() << " ";
  newDog->makeSound();
  delete (newDog);
}

void testNotAllocateCorrectVer(void)
{
  testTitle("Not Allocate Correct class");
  Animal animal;
  std::cout << animal.getType() << " ";
  animal.makeSound();

  Cat cat;
  std::cout << cat.getType() << " ";
  cat.makeSound();

  Dog dog;
  std::cout << dog.getType() << " ";
  dog.makeSound();
}

void testCorrectclass(void)
{
  testAllocateCorrectVer();
  testNotAllocateCorrectVer();
}
