
#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <iostream>
# include <string>
class AWeapon
{
	protected:
		std::string name;
		int apCost;
		int damage;
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &other);
		virtual ~AWeapon();
		std::string const &getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack() const = 0;
};


#endif // !AWEAPON_HPP
