
#include "Human.hpp"
#include "Brain.hpp"

int main(void)
{
	Human	bob;
	
	std::cout << "TEST" << std::endl;
	std::cout << bob.identifier() << std::endl;
	std::cout << bob.getBrains().identifier() << std::endl;

	return (0);
}
