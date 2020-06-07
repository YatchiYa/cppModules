
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = std::string();
}

ZombieEvent::~ZombieEvent(){}

void	ZombieEvent::setZombieType(std::string str)
{
	this->type = str;
}

Zombie	*ZombieEvent::newZombie(std::string str)
{
	Zombie	*newzombie;

	newzombie = new Zombie(str, this->type);
	return (newzombie);
}


Zombie *ZombieEvent::randomChump(void)
{
	Zombie	*zombie;
	int		n;
	std::vector<std::string>	tab;

	tab = {"ZOZO", "KOKO", "TOTO", "MORBIDE", "ZIGS"};
	n = std::rand() % (tab.size() - 1);

	zombie = new Zombie(tab[n], this->type);
	zombie->advert();
	return (zombie);
}