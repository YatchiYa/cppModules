
#include "PowerFist.hpp"

PowerFist::PowerFist() :
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(PowerFist const &other) :
	AWeapon(other)
{
}

PowerFist::~PowerFist()
{
}


void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}