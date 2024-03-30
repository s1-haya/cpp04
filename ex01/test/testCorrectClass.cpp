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

const Animal** newAnimalClass() {
	const Animal** animals = new const Animal*[SIZE + SIZE];
	for (size_t i = 0; i < SIZE; i++) {
		animals[i] = new Cat();
	}
	for (size_t i = 0; i < SIZE; i++) {
		animals[i + SIZE] = new Dog();
	}
	return (animals);
}

void deleteAnimalClass( const Animal** animals ) {
	for (size_t i = 0; i < (SIZE + SIZE); i++) {
		delete animals[i];
	}
	delete [] animals;
}

void testAllocateCorrectVer() {
	testTitle("Allocate Correct Class");
	const Animal** animals = newAnimalClass();
	for (size_t i = 0; i < (SIZE + SIZE); i++) {
		std::cout << animals[i]->getType();
		animals[i]->makeSound();
	}
	deleteAnimalClass(animals);
}

/*
test:
Brain Class
- Whether << operator is working correctly or not.
- Whether the array std::string is correctly filled.
- Whether setIdea is working correctly or not.
*/

void testBrainClass() {
	testTitle("Brain Class");
	Brain brain;
	std::cout << "Ideas: " << std::endl;
	testJudgeString("\0", brain.getIdea(100));
	testJudgeString("\0", brain.getIdea(-1));
	// testJudgeString("Default ideas", brain.getIdea(-1));
	brain.setIdea("j cole", 0);
	brain.setIdea("litle simiz", 99);
	brain.setIdea("jay z", 100);
	brain.setIdea("jay z", -1);
	std::cout << brain << std::endl;
}

void testCorrectClass() {
	testBrainClass();
	testAllocateCorrectVer();
}
