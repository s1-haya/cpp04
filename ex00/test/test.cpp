#include <iostream>

void testCorrectClass();
void testWrongClass();

void runTest() {
	testCorrectClass();
	testWrongClass();
	std::system("leaks -q polymorphism");
}
