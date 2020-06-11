
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <time.h>

class FragTrap
{
public:
	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);
	virtual ~FragTrap();
	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	bool takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	FragTrap &operator=(FragTrap const &other);
	void vaulthunter_dot_exe(std::string const &target);

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

#endif // !FRAGTRAP_HPP
