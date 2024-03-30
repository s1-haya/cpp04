#ifndef EX02_CAT_HPP_
#define EX02_CAT_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
private:
	Brain* brain_;
public:
	Cat();
	Cat( const Cat& other );
	Cat& operator=( const Cat& other );
	~Cat();
	void makeSound() const;
};

#endif
