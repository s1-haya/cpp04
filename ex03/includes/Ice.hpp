#ifndef EX03_ICE_HPP_
#define EX03_ICE_HPP_

#include "AMateria.hpp"

class Ice: public AMateria{
public:
	Ice( void );
	Ice( const Ice& other );
	Ice& operator=( const Ice& other );
	~Ice( void );
	AMateria* clone( void ) const;
	void use( ICharacter& target );
};

#endif
