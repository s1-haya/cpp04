#include "Cat.hpp"
#include "Dog.hpp"

void test_correct_class() {

	//no allocate ver
	Animal animal;
	animal.makeSound();

	Cat cat;
	cat.makeSound();

	Dog dog;
	dog.makeSound();

	//allocate ver
	const Animal* newAnimal = new Animal();
	newAnimal->makeSound();

	const Animal* newCat = new Cat();
	std::cout << newCat->getType() << " " << std::endl;
	newCat->makeSound();

	const Animal* newDog = new Dog();
	std::cout << newDog->getType() << " " << std::endl;
	newDog->makeSound();

	delete(newAnimal);
	delete(newDog);
	delete(newCat);
}

void runTest() {
	test_correct_class();
	system("leaks -q animal");
}
