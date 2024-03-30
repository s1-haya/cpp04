#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 5

// void testAllocateCorrectVer(const AAnimal** animals) {
// 	std::cout << "-----------------------------" << std::endl;
// 	for (size_t i = 0; i < (SIZE + SIZE); i++) {
// 		std::cout << animals[i]->getType() << std::endl;
// 		animals[i]->makeSound();
// 	}
// 	std::cout << "-----------------------------" << std::endl;
// }

// const AAnimal** newAnimalClass() {
// 	const AAnimal** animals = new const AAnimal*[SIZE + SIZE];
// 	for (size_t i = 0; i < SIZE; i++) {
// 		animals[i] = new Cat();
// 	}
// 	for (size_t i = 0; i < SIZE; i++) {
// 		animals[i + SIZE] = new Dog();
// 	}
// 	return (animals);
// }

// void deleteAnimalClass( const AAnimal** animals ) {
// 	for (size_t i = 0; i < (SIZE + SIZE); i++) {
// 		delete animals[i];
// 	}
// 	delete [] animals;
// }

void testAbstract() {
	std::cout << "Abstract " << std::endl;
	// error: return type 'AAnimal' is an abstract class
	// AAnimal animal();
	// static_cast<AAnimal>(cat);
	// error: allocating an object of abstract class type 'AAnimal'
	// AAnimal* animal = new AAnimal();
	Cat cat;
	Dog dog;

	// ok: reference, pointer
	AAnimal& i(AAnimal&);
	AAnimal* animal;
	std::cout << animal << std::endl;
}
