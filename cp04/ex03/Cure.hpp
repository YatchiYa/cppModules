
#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &other);
	virtual ~Cure();

	Cure &operator=(Cure const &other);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif