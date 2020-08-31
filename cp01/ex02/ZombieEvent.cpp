
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
	
	const std::string tab[] = {
    "ZOZO", "KOKO", "TOTO", "MORBIDE", "ZIGS",
    };

	zombie = new Zombie(tab[rand() % 5], this->type);
	zombie->advert();
	return (zombie);
}