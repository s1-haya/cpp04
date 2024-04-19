#ifndef EX03_MATERIASOURCE_HPP_
#define EX03_MATERIASOURCE_HPP_

#include "IMateriaSource.hpp"

#define MAX_MATERIAS 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria* materias_[MAX_MATERIAS];
public:
	MateriaSource( void );
	MateriaSource( MateriaSource const& other );
	MateriaSource& operator=( MateriaSource const& other );
	~MateriaSource( void );
	virtual void learnMateria( AMateria* materia );
	virtual AMateria* createMateria( std::string const& type );
};

#endif
