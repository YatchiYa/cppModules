#pragma once

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent();
	virtual ~ZombieEvent();
	Zombie	*newZombie(std::string str);
	void	setZombieType(std::string str);
	Zombie	*randomChump(void);

private:
	std::string		type;
};


#endif // !ZOMBIEEVENT_HPP

