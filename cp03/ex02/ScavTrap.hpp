
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	ScavTrap();
public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &other);
	virtual ~ScavTrap();

	ScavTrap &operator=(ScavTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void challengeNewcomer(void);
};

#endif // !SCAVTRAP_HPP
