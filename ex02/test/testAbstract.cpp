#include "Cat.hpp"
#include "Dog.hpp"

void testTitle(const std::string title);

#define SIZE 5

/*
test:
- the default Animal class should not be instantiable.
- Abstract class error case
*/

void testAbstract() {
	testTitle("Abstract");
	// error: allocating an object of abstract class type 'AAnimal'
	// AAnimal* animal = new AAnimal();
	// error: return type 'AAnimal' is an abstract class
	// AAnimal animal();
	// static_cast<AAnimal>(cat);
	// error: allocating an object of abstract class type 'AAnimal'
	// AAnimal* animal = new AAnimal();
	// error: redefinition of 'cat' with a different type: 'AAnimal' vs 'Cat'
	// AAnimal cat = new Cat();
	Cat cat;
	Dog dog;

	// ok: reference, pointer
	AAnimal& i(AAnimal&);
	AAnimal* animal;
	animal = new Cat();
	std::cout << animal << std::endl;
	animal->makeSound();
	delete animal;
}
