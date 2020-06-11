
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <time.h>

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	virtual ~ScavTrap();

	ScavTrap &operator=(ScavTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);

private:
	std::string name;
	int level;
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
};

#endif // !SCAVTRAP_HPP
