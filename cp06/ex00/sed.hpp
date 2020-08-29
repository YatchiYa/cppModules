
#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

class Sed
{
private:
	Sed();


public:
	static int	get_precision(std::string s);
	static void convFloat(std::string arg);
	static bool isDouble(std::string arg);
	static void convChar(std::string arg);
	static void convInt(std::string arg);
	static void convDouble(std::string arg);
};


#endif