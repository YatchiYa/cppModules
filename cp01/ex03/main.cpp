
#include "Zombie.hpp"
#include "ZombieHord.hpp"

void	appocalypto(ZombieHord *list_zombie1, ZombieHord *list_zombie2)
{
	int		i;

	i = -1;
	std::cout << "\n \n \nbraiiinnnnssss .... the city is over there ...." << std::endl;
	while (++i < list_zombie1->getSize())
	{
		list_zombie1->getZombies()[i].advert();
		list_zombie2->getZombies()[i].advert();
	}
	std::cout << "brainnnssss .... there is brains over there ....." << std::endl;
	std::cout << "after 10 minutes walking ..." << std::endl;
	std::cout << " braiiinnnss..... there no humains here " << std::endl;
	std::cout << " braiiinnsss.... simulation is over !!" << std::endl;
}

int		main(void)
{
	ZombieHord				*zombie1;
	ZombieHord				*zombie2;

	std::cout << "Zombie Orc hord creating !!" << std::endl;
	zombie1 = new ZombieHord(5);
	zombie1->setType("Orcs");
	zombie1->createZombies();

	std::cout << "Zombie Elf hord creating !!" << std::endl;
	zombie2 = new ZombieHord(5);
	zombie2->setType("Elf");
	zombie2->createZombies();
	appocalypto(zombie1, zombie2);
	std::cout << "zombie wave cleared by some annonymous power " << std::endl;
	
	return (0);
}