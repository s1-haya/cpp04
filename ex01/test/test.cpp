#include <iostream>

void testCorrectClass();

void runTest() {
	testCorrectClass();
	std::system("leaks -q polymorphism");
}
