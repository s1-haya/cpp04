#ifndef EX03_ICHARACTER_HPP_
#define EX03_ICHARACTER_HPP_

#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter(void){};
	virtual std::string const &getName(void) const = 0;
	virtual void equip(AMateria *materia) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter &target) = 0;
};

#endif
