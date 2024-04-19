#include <iostream>

void testAbstract(void);
void testAnimalclass(void);
void testBrainclass(void);

void runTest(void)
{
  testAbstract();
  testAnimalclass();
  testBrainclass();
  std::system("leaks -q polymorphism");
}
