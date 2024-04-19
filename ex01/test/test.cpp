#include <iostream>

void testCorrectclass(void);

void runTest(void)
{
  testCorrectclass();
  std::system("leaks -q polymorphism");
}
