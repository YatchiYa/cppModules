
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int amount;
	AMateria *sources[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	virtual ~MateriaSource();

	MateriaSource &operator=(MateriaSource const &other);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
};

#endif