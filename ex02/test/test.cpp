#include <iostream>

void testAbstract();
void testAnimalClass();
void testBrainClass();

void runTest() {
	testAbstract();
	testAnimalClass();
	testBrainClass();
	std::system("leaks -q polymorphism");
}
