#include "Brain.hpp"

Brain::Brain(void)
{
	for (size_t i = 0; i < MAX_IDEAS; i++)
	{
		this->ideas_[i] = "Default idea";
	}
	std::cout << "Brain defalut construcotr called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (size_t i = 0; i < MAX_IDEAS; i++)
	{
		this->setIdea(other.getIdea(i), i);
	}
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < MAX_IDEAS; i++)
		{
			this->setIdea(other.getIdea(i), i);
		}
	}
	std::cout << "Brain copy assignment operator called" << std::endl;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

const std::string &Brain::getIdea(size_t index) const
{
	if (!(index < MAX_IDEAS))
	{
		static const std::string emptyString;
		std::cerr << "Error: The upper limit is exceed." << std::endl;
		return (emptyString);
	}
	return (this->ideas_[index]);
}

void Brain::setIdea(const std::string &idea, size_t index)
{
	if (!(index < MAX_IDEAS))
	{
		std::cout << "Error: " << idea << " could not be registered because the " << index << " index exceeded the upper limit of ideas." << std::endl;
		return;
	}
	this->ideas_[index] = idea;
}

std::ostream &operator<<(std::ostream &os, const Brain &other)
{
	for (size_t i = 0; i < MAX_IDEAS; i++)
	{
		os << "ideas[" << i << "]: " << other.getIdea(i) << std::endl;
		;
	}
	return (os);
}
