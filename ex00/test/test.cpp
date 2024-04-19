#include <iostream>

void testCorrectclass(void);
void testWrongclass(void);

void runTest(void)
{
  testCorrectclass();
  testWrongclass();
  std::system("leaks -q polymorphism");
}
