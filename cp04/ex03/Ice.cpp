
#include "Ice.hpp"

Ice::Ice() :
	AMateria("ice")
{
}

Ice::Ice(Ice const &other) :
	AMateria("ice")
{
	this->_xp = other._xp;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &other)
{
	this->_xp = other._xp;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << " s wounds *" << std::endl;
}