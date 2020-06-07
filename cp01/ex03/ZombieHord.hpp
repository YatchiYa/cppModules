
#ifndef ZOMBIEHORD_HPP
# define ZOMBIEHORD_HPP

# include "Zombie.hpp"

class ZombieHord
{
public:
	ZombieHord(int n);
	virtual ~ZombieHord();

	void	setType(std::string str);
	int		getSize();
	Zombie	*getZombies();
	void	createZombies(void);

private:
	int				size;
	std::string		type;
	Zombie			*list_zombie;
};


#endif // !ZOMBIEHORD_HPP
