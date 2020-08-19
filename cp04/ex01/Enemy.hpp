
#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{
protected:
	std::string type;
	int hp;
public:
	Enemy();
	Enemy(int hp, std::string const &type);
	Enemy(Enemy const &other);
	virtual ~Enemy();


	std::string const &getType(void) const;
	int getHP(void) const;

	virtual void takeDamage(int damage);
};

#endif