
#include "Human.hpp"

Human::Human()
{
}

Human::~Human(){}

std::string Human::identifier(void) const
{
	return (this->brain.identifier());
}

const Brain		&Human::getBrains() const
{
	return (this->brain);
}
