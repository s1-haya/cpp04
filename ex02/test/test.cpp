#include <iostream>

void testAbstract(void);
void testAnimalClass(void);
void testBrainClass(void);

void runTest(void) {
  testAbstract(void);
  testAnimalClass(void);
  testBrainClass(void);
  std::system("leaks -q polymorphism");
}
