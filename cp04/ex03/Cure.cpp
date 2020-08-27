
#include "Cure.hpp"

Cure::Cure() :
	AMateria("cure")
{
}

Cure::Cure(Cure const &other) :
	AMateria("cure")
{
	this->_xp = other._xp;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &other)
{
	this->_xp = other._xp;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}