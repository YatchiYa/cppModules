
#include <iostream>
#include <string>

void memoryLeak(void)
{
	std::string *panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}

int	 main(void)
{
	memoryLeak();
	return (0);
}