#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);
void testJudgeString(const std::string& expected, const std::string& output);

#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define DEFAULT "\033[0m"

/*
test:
- Constructors and destructors of each class must display specific messages
- the Dog’s type will be initialized to "Dog"
- the Cat’s type will be initialized to "Cat"
*/

#define SIZE 5

const AAnimal** newAnimalClass() {
	const AAnimal** animals = new const AAnimal*[SIZE + SIZE];
	for (size_t i = 0; i < SIZE; i++) {
		animals[i] = new Cat();
	}
	for (size_t i = 0; i < SIZE; i++) {
		animals[i + SIZE] = new Dog();
	}
	return (animals);
}

void deleteAnimalClass( const AAnimal** animals ) {
	for (size_t i = 0; i < (SIZE + SIZE); i++) {
		delete animals[i];
	}
	delete [] animals;
}

void testCopyConstructor() {
	AAnimal* cat = new Cat();
	AAnimal* tmp_cat(cat);
	delete cat;
}

void testAssigntConstructor() {
	AAnimal* cat = new Cat();
	AAnimal* tmp_cat(cat);
	delete cat;
}

void testAnimalClass() {
	testTitle("Allocate Animal Class");
	const AAnimal** animals = newAnimalClass();
	for (size_t i = 0; i < (SIZE + SIZE); i++) {
		std::cout << animals[i]->getType();
		animals[i]->makeSound();
	}
	deleteAnimalClass(animals);
}
