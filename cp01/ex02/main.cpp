
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	appocalypto(Zombie **list_zombie1, Zombie **list_zombie2)
{
	int		i;

	i = -1;
	std::cout << "braiiinnnnssss .... the city is over there ...." << std::endl;
	while (++i < 5)
	{
		list_zombie1[i]->advert();
		list_zombie2[i]->advert();
	}
	std::cout << "brainnnssss .... there is brains over there ....." << std::endl;
	std::cout << "after 10 minutes walking ..." << std::endl;
	std::cout << " braiiinnnss..... there no humains here " << std::endl;
	std::cout << " braiiinnsss.... simulation is over !!" << std::endl;
}

int		main(void)
{
	int					i;
	ZombieEvent				zombie1;
	ZombieEvent				zombie2;
	Zombie					*list_zombie1[5];
	Zombie					*list_zombie2[5];

	i = -1;
	std::cout << "<---  init zombies --->" << std::endl;
	std::cout << "Zombie Orcs created " << std::endl;
	zombie1.setZombieType("Orcs");
	while (++i < 5)
		list_zombie1[i] = zombie1.randomChump();
	std::cout << "Zombie Elfs created " << std::endl;
	zombie2.setZombieType("Elfs");
	i = -1;
	while (++i < 5)
		list_zombie2[i] = zombie2.randomChump();
	std::cout << " **** let the appocalypse begins *****" << std::endl;
	appocalypto(list_zombie1, list_zombie2);
	i = -1;
	while (++i < 5)
		delete list_zombie1[i];
	i = -1;
	while (++i < 5)
		delete list_zombie2[i];
	std::cout << "zombie wave cleared by some annonymous power " << std::endl;
	return (0);
}