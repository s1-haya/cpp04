#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

void testTitle(const std::string title);

/*
test: MateriaBehavior
ice and cure class
- Whether clone is working correctly or not.
- Whether use is working correctly or not.
*/

void testMateriaBehavior(void)
{
	testTitle("test materia behavior");
	AMateria *ice = new Ice();
	AMateria *cure = new Cure();
	AMateria *iceClone = ice->clone();
	AMateria *cureClone = cure->clone();
	if (ice != iceClone)
	{
		std::cout << "OK" << std::endl;
		std::cout << "Ice = " << ice << std::endl;
		std::cout << "IceClone = " << iceClone << std::endl;
	}
	else
		std::cout << "KO" << std::endl;
	if (cure != cureClone)
	{
		std::cout << "OK" << std::endl;
		std::cout << "Cure = " << cure << std::endl;
		std::cout << "CureClone = " << cureClone << std::endl;
	}
	else
		std::cout << "KO" << std::endl;

	ICharacter *me = new Character("A");
	ice->use(*me);
	iceClone->use(*me);
	cure->use(*me);
	cureClone->use(*me);
	delete me;
	delete ice;
	delete iceClone;
	delete cure;
	delete cureClone;
}
