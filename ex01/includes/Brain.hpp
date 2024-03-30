#ifndef EX01_BRAIN_HPP_
#define EX01_BRAIN_HPP_

#include <iostream>

#define MAX_IDEAS 100

class Brain{
private:
	std::string ideas_[MAX_IDEAS];
public:
	Brain();
	Brain( const Brain& other );
	Brain& operator=( const Brain& other );
	~Brain();
	const std::string& getIdea( size_t index ) const;
	void setIdea( const std::string& idea, size_t index );
};

std::ostream& operator<<( std::ostream& os, const Brain& other );

#endif
