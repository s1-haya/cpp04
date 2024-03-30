#ifndef EX03_ICHARACTER_HPP_
#define EX03_ICHARACTER_HPP_

#include "AMateria.hpp"

#define MAX_MATERIAS 4

class ICharacter{
private:
	AMateria materias_[MAX_MATERIAS];
	std::string const& name_;
public:
	ICharacter();
	ICharacter( const ICharacter& other );
	ICharacter& operator=( const ICharacter& other );
	virtual ~ICharacter();
	virtual std::string const& getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
