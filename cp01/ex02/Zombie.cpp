
#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = std::string();
	this->type = std::string();
}

Zombie::Zombie(std::string n, std::string t)
{
	this->name = n;
	this->type = t;
}

void	Zombie::setName(std::string str)
{
	this->name = str;
}
void	Zombie::setType(std::string str)
{
	this->type = str;
}

Zombie::~Zombie()
{}

void	Zombie::advert(void)
{
	std::cout << "< " << this->name << " (" <<
		this->type << ")> " << "Braiiiiiinnnns..." << std::endl;
}

