#ifndef EX03_IMATERIASOUCRCE_HPP_
#define EX03_IMATERIASOUCRCE_HPP_

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource(void) {}
	virtual void learnMateria(AMateria *) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
