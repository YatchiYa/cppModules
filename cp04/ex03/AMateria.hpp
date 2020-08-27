
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const &type);
	virtual ~AMateria();

	std::string const &getType(void) const;
	unsigned int getXP(void) const;

	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter &target);
};

#endif