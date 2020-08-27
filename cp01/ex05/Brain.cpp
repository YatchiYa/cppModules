
#include "Brain.hpp"

Brain::Brain()
{
	this->neurones = 86000;
}

Brain::~Brain()
{}

std::string Brain::identifier(void) const
{
	unsigned int adr;
	std::string	str;
	std::stringstream ss;

	adr = (unsigned int)this;
	ss << "0x" << std::uppercase << std::hex << adr;
	str = ss.str();
	return (str);
}