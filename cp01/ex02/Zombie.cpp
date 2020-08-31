
#include "Zombie.hpp"

const std::string NAMES[] = {
    "John", "Jack", "Jerry", "Jeremy", "Jessica",
    "James Dean", "July", "Steven", "Carrot", 
    "Cauliflower",
    };

std::string getRandomName()
{
    return (NAMES[rand() % 10]);
}

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

