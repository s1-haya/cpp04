#ifndef EX03_ICE_HPP_
#define EX03_ICE_HPP_

#include "AMateria.hpp"

class Ice: public AMateria{
public:
	Ice();
	Ice( const Ice& other );
	Ice& operator=( const Ice& other );
	~Ice();
	Ice* clone() const = 0;
};

#endif
