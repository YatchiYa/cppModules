
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <time.h>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	FragTrap();
public:
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &other);
	virtual ~FragTrap();

	FragTrap &operator=(FragTrap const &other);

	void meleeAttack(std::string const &target);
	void rangedAttack(std::string const &target);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif // !FRAGTRAP_HPP
