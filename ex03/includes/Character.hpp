#ifndef EX03_CHARACTER_HPP_
#define EX03_CHARACTER_HPP_

#include "ICharacter.hpp"

#define MAX_MATERIAS 4

class Character: public ICharacter {
private:
	AMateria* materias_[MAX_MATERIAS];
	std::string const name_;
public:
	Character( void );
	Character( const std::string& name );
	Character( const Character& other );
	Character& operator=( const Character& other ) ;
	~Character( void );
	std::string const& getName( void ) const;
	void equip( AMateria *materia );
	void unequip( int idx );
	void use( int idx, ICharacter &target );
};

#endif
