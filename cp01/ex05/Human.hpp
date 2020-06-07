#pragma once

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
public:
	Human();
	virtual ~Human();

	std::string		identifier(void) const;
	const Brain		&getBrains() const;

private:
	const Brain	brain;
};


#endif // !HUMAN_HPP

