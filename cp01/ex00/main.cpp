
#include "Pony.hpp"

void	onThestack(void)
{
	Pony	newpony;

	newpony.setName("Chuchu");
	newpony.run();
	newpony.jump();
	newpony.run();
}

void	onTheheap(void)
{
	Pony	*newpony;

	newpony = new Pony();
	newpony->setName("Zigzig"); 
	newpony->run();
	newpony->jump();
	newpony->run();
	delete newpony;
}

int main(void)
{
	std::cout << " on the stack " << std::endl;
	onThestack();
	std::cout << " on the heap " << std::endl;
	onTheheap();
	std::cout << " done # " << std::endl;
	return (0);
}
