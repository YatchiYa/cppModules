
#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
private:
	SuperTrap();
public:
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &other);
	virtual ~SuperTrap();

	SuperTrap &operator=(SuperTrap const &other);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
};

#endif