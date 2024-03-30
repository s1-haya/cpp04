#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);

/*
test:
- Constructors and destructors of each class must display specific messages
- the Dog’s type will be initialized to "Dog"
- the Cat’s type will be initialized to "Cat"
*/

void testAllocateCorrectVer() {
	testTitle("Allocate Correct Class");
	const Animal* newAnimal = new Animal();
	std::cout << newAnimal->getType() << " ";
	newAnimal->makeSound();
	delete(newAnimal);

	const Animal* newCat = new Cat();
	std::cout << newCat->getType() << " ";
	newCat->makeSound();
	delete(newCat);

	const Animal* newDog = new Dog();
	std::cout << newDog->getType() << " ";
	newDog->makeSound();
	delete(newDog);
}

void testNotAllocateCorrectVer() {
	testTitle("Not Allocate Correct Class");
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

void testCorrectClass() {
	testNotAllocateCorrectVer();
	testAllocateCorrectVer();
}
