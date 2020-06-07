
#include "Pony.hpp"

Pony::Pony()
{
	this->name = std::string();
}

Pony::~Pony()
{}

void	Pony::jump()
{
	std::cout << this->name << " is jumping huhuhu " << std::endl;
}

void	Pony::run()
{
	std::cout << this->name << " is running huhuhu " << std::endl;
}

void	Pony::setName(std::string str)
{
	this->name = str;
	std::cout << "Pony named " << this->name << " is created huhuhu " << std::endl;
}

std::string	Pony::getName(void)
{
	return (this->name);
}