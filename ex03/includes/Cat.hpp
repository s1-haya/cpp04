#ifndef EX03_CAT_HPP_
#define EX03_CAT_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
private:
	Brain* brain_;
public:
	Cat( void );
	Cat( const Cat& other );
	Cat& operator=( const Cat& other );
	~Cat( void );
	void makeSound( void ) const;
};

#endif
