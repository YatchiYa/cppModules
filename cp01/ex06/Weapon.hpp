
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Weapon
{
public:
	Weapon();
	~Weapon();
	Weapon(std::string type);

	std::string	getType();
	void		setType(std::string str);

private:
	std::string		type;
};

#endif