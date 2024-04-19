#include <iostream>

void testCorrectClass(void);
void testWrongClass(void);

void runTest(void) {
  testCorrectClass(void);
  testWrongClass(void);
  std::system("leaks -q polymorphism");
}
