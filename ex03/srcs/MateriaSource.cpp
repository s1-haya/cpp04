#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < MAX_MATERIAS; i++)
	{
		this->materias_[i] = 0;
	}
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	for (int i = 0; i < MAX_MATERIAS; i++)
	{
		if (other.materias_[i])
			this->materias_[i] = (other.materias_[i])->clone();
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < MAX_MATERIAS; i++)
		{
			if (this->materias_[i])
			{
				delete this->materias_[i];
				this->materias_[i] = 0;
			}
			if (other.materias_[i])
				this->materias_[i] = other.materias_[i]->clone();
		}
	}
	std::cout << "MateriaSource assignation operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < MAX_MATERIAS; i++)
	{
		if (this->materias_[i])
			delete this->materias_[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	int i = 0;
	if (materia == NULL)
	{
		std::cout << "Can't learn because the materia is NULL" << std::endl;
		;
		return;
	}
	while (this->materias_[i] != 0)
	{
		i++;
		if (i >= MAX_MATERIAS)
		{
			std::cout << "Can't learn more than 4 Materia" << std::endl;
			;
			delete materia;
			return;
		}
	}
	(this->materias_)[i] = materia;
	std::cout << "Materia " << materia->getType() << " learned" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < MAX_MATERIAS && (this->materias_)[i])
	{
		if (((this->materias_)[i])->getType().compare(type) == 0)
		{
			std::cout << "Materia " << type << " created" << std::endl;
			return (((this->materias_)[i])->clone());
		}
		i++;
	}
	std::cout << "Materia " << type << " does not exit" << std::endl;
	return (0);
}
