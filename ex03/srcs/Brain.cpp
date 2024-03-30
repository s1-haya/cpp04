#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain defalut construcotr called" << std::endl;
	for(size_t i = 0; i < MAX_IDEAS; i++) {
		this->ideas_[i] = "Default idea";
	}
}

Brain::Brain( const Brain& other ) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=( const Brain& other ) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other) {
		for(size_t i = 0; i < MAX_IDEAS; i++) {
			this->setIdea(other.getIdea(i), i);
		}
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea( size_t index ) const {
	if (!(index < MAX_IDEAS))
	{
		std::cout << "Error: The upper limit is exceed." << std::endl;
		return ("");
	}
	return (this->ideas_[index]);
}

void Brain::setIdea( std::string idea, size_t index ) {
	if (!(index < MAX_IDEAS))
	{
		std::cout << "Error: " << idea << " could not be registered because the " << index << " index exceeded the upper limit of ideas." << std::endl;
		return ;
	}
	this->ideas_[index] = idea;
}

std::ostream& operator<<( std::ostream& os, const Brain& other ) {
	for(size_t i = 0; i < MAX_IDEAS; i++) {
		os << "ideas[" << i << "]: " << other.getIdea(i) << std::endl;;
	}
	return (os);
}
