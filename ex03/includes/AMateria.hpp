#ifndef EX03_AMATERIA_HPP_
#define EX03_AMATERIA_HPP_

#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria{
protected:
	std::string type_;
public:
	AMateria( void );
	AMateria( std::string const& type );
	AMateria( const AMateria& other );
	AMateria& operator=( const AMateria& other );
	virtual ~AMateria( void ) = 0;
	std::string const& getType( void ) const;
	virtual AMateria* clone( void ) const = 0;
	virtual void use( ICharacter& target );
};

#endif
