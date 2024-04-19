#include "AMateria.hpp"

AMateria::AMateria(void) : type_("Unknown type")
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type_(type)
{
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &other) : type_(other.type_)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType(void) const
{
	return (this->type_);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}
