#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <vector>
# include <cstdlib>

class Zombie
{
public:
	Zombie();
	Zombie(std::string n, std::string t);
	virtual ~Zombie();

	void	advert(void);
	void	setType(std::string str);
	void	setName(std::string str);

private:
	std::string	type;
	std::string	name;
};


#endif