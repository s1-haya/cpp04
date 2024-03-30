#include <iostream>

void testAbstract();

void runTest() {
	testAbstract();
	system("leaks -q practice_polymorphism");
}
