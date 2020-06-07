
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>
# include <iomanip>
# include <string>

class Brain
{
public:
	Brain();
	virtual ~Brain();

	std::string identifier(void) const;

private:
	int		neurones;
};


#endif // !BRAIN_HPP
