#ifndef EX03_CURE_HPP_
#define EX03_CURE_HPP_

#include "AMateria.hpp"

class Cure: public AMateria{
public:
	Cure( void );
	Cure( const Cure& other );
	Cure& operator=( const Cure& other );
	~Cure( void );
	AMateria* clone( void ) const;
	void use( ICharacter& target );
};

#endif
