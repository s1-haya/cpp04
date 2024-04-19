#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <limits.h>

void testTitle(const std::string title);

/*
test: CharacterBehavior
- Whether equip is working correctly or not.
- Whether unequip is working correctly or not.
- Whether use is working correctly or not.
*/


void testCharacterBehavior(void)
{
  testTitle("test character equip");
  ICharacter *cole = new Character("J COLE");
  AMateria *ice = new Ice();
  AMateria *cure = new Cure();
  AMateria *iceClone = ice->clone();
  AMateria *cureClone = cure->clone();
  cole->equip(ice);
  cole->equip(cure);
  cole->equip(iceClone);
  cole->equip(cureClone);
  std::cout << "-- don't equip message -- " << std::endl;
  AMateria *tmp = new Ice();
  cole->equip(ice);
  cole->equip(cure);
  cole->equip(NULL);
  cole->equip(tmp);
  delete tmp;

  testTitle("test character unequip & use");
  for (int i = 0; i < 4; i++)
  {
    cole->use(i, *cole);
  }
  cole->unequip(0);
  delete ice;
  cole->use(0, *cole);
  std::cout << "-- don't unequip message -- " << std::endl;
  cole->unequip(-1);
  cole->unequip(5);
  cole->unequip(INT_MAX);
  cole->unequip(INT_MIN);
  std::cout << "-- don't use message -- " << std::endl;
  cole->use(-1, *cole);
  cole->use(5, *cole);
  cole->use(INT_MAX, *cole);
  cole->use(INT_MIN, *cole);
  delete cole;
}
