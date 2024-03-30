#ifndef EX03_CURE_HPP_
#define EX03_CURE_HPP_

#include "AMateria.hpp"

class Cure: public AMateria{
public:
	Cure();
	Cure( const Cure& other );
	Cure& operator=( const Cure& other );
	~Cure();
	Cure* clone() const = 0;
};

#endif
