#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void testTitle(const std::string title);

/*
test: MateriaSource
- Whether learnMateria is working correctly or not.
- Whether createMateria is working correctly or not.
*/

void testMateriaSource(void)
{
	testTitle("test materia source");
	IMateriaSource *materias = new MateriaSource();
	// AMateria* learnIce = new Ice();
	// materias->learnMateria(learnIce);
	materias->learnMateria(new Ice());
	materias->learnMateria(new Cure());
	materias->learnMateria(new Ice());
	materias->learnMateria(new Cure());
	materias->learnMateria(new Cure());
	materias->learnMateria(NULL);
	AMateria *ice;
	ice = materias->createMateria("ice");
	AMateria *cure = materias->createMateria("cure");
	AMateria *apple = materias->createMateria("apple");
	delete materias;
	delete ice;
	delete cure;
	delete apple;
	// AMateria* null = materias->createMateria(NULL);
	// (void) null;
	// delete learnIce;
}
