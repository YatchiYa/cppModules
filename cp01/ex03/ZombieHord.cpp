
#include "ZombieHord.hpp"

ZombieHord::ZombieHord(int n)
{
	if (n <= 0)
		std::cout << "not enough zombies " << std::endl;
	else
		this->size = n;
}
ZombieHord::~ZombieHord()
{
	std::cout << "Horde " << this->type << " is being destroyed !" << std::endl;
	delete[] this->list_zombie;
}

void	ZombieHord::setType(std::string str)
{
	this->type = str;
}

int		ZombieHord::getSize()
{
	return (this->size);
}

Zombie	*ZombieHord::getZombies()
{
	return (this->list_zombie);
}

void	ZombieHord::createZombies(void)
{
	int			i;

	i = -1;
	this->list_zombie = new Zombie[this->size];
	while (++i < this->size)
	{
		this->list_zombie[i].setType(this->type);
		this->list_zombie[i].setName(this->list_zombie[i].randName());
		this->list_zombie[i].advert();
	}
}

