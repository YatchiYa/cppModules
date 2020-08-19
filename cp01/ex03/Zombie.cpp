
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

std::string		Zombie::randName(void)
{
	int							n;
	std::vector<std::string>	tab;

	tab.push_back("ZOZO");
	tab.push_back("KOKO");
	tab.push_back("TOTO");
	tab.push_back("MORBIDE");
	tab.push_back("ZIGS");
	n = std::rand() % (tab.size() - 1);
	return (tab[n]);
}
