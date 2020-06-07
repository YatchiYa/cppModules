
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon weapon;
public:
	HumanA(std::string name, Weapon weapon);
	virtual ~HumanA();

	void attack(void);
};

#endif