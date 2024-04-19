#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);
void testJudgeString(const std::string &expected, const std::string &output);

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

const AAnimal **newAnimalClass(void) {
  const AAnimal **animals = new const AAnimal *[SIZE + SIZE];
  for (size_t i = 0; i < SIZE; i++) {
    animals[i] = new Cat(void);
  }
  for (size_t i = 0; i < SIZE; i++) {
    animals[i + SIZE] = new Dog(void);
  }
  return (animals);
}

void deleteAnimalClass(const AAnimal **animals) {
  for (size_t i = 0; i < (SIZE + SIZE); i++) {
    delete animals[i];
  }
  delete[] animals;
}

void testCopyConstructorInAnimalClass(void) {
  testTitle("Animal Copy Constructor");
  AAnimal *cat = new Cat(void);
  AAnimal *tmpCat(cat);
  delete cat;
  std::cout << "tmp cat: " << tmpCat->getType(void) << std::endl;
}

void testCopyAssignmentOperatorInAnimalClass(void) {
  testTitle("Animal Copy Assignment Operator");
  Cat *cat = new Cat(void);
  Cat *tmpCat = new Cat(void);
  *tmpCat = *cat;
  delete cat;
  delete tmpCat;
}

void testAnimalClass(void) {
  testTitle("Allocate Animal Class");
  const AAnimal **animals = newAnimalClass(void);
  for (size_t i = 0; i < (SIZE + SIZE); i++) {
    std::cout << animals[i]->getType(void);
    animals[i]->makeSound(void);
  }
  deleteAnimalClass(animals);
  testCopyConstructorInAnimalClass(void);
  testCopyAssignmentOperatorInAnimalClass(void);
}
