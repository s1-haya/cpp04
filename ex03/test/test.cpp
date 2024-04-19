#include <iostream>

void testCharacterBehavior( void );
void testMateriaBehavior( void );
void testMateriaSource( void );

void runTest( void ) {
	testCharacterBehavior();
	testMateriaBehavior();
	testMateriaSource();
	system("leaks -q practice");
}
