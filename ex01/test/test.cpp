#include <iostream>

void testCorrectClass(void);

void runTest(void) {
  testCorrectClass(void);
  std::system("leaks -q polymorphism");
}
