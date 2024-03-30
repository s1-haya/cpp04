#ifndef EX03_AMATERIA_HPP_
#define EX03_AMATERIA_HPP_

#include <iostream>
#include "ICharacter.hpp"

class AMateria{
protected:
	std::string const& type_;
public:
	AMateria();
	AMateria( std::string const& type );
	AMateria( const AMateria& other );
	virtual ~AMateria() = 0;
	AMateria& operator=( const AMateria& other );
	std::string const& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use( ICharacter& target );
// [...]
};

#endif
