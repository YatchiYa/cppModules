
#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string const &name);
	Peon(Peon const &peon);
	virtual ~Peon();

	Peon &operator=(const Peon& other);

	void getPolymorphed(void) const;
};

#endif