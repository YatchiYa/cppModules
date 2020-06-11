

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <time.h>

class ClapTrap
{
protected:
	ClapTrap();

	std::string name;
	int level;
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

	void copy(ClapTrap const &other);
public:
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &other);
	virtual ~ClapTrap();

	ClapTrap &operator=(ClapTrap const &other);

	virtual void meleeAttack(std::string const &target);
	virtual void rangedAttack(std::string const &target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string const &getName(void);
};

#endif