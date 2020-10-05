
#include "sed.hpp"
# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

static const double MAX = static_cast<double>(2147483647);
static const double MIN = static_cast<double>(-2147483647);


int	Sed::get_precision(std::string s)
{
	int i = 0;
	int ret = 0;
	while (s[i] != '.')
		i++;
	while (s[i])
	{
		ret++;
		i++;
	}
	return (ret - 1);
}

void Sed::convFloat(std::string arg)
{
	char *p;
	const char *tmp = arg.c_str();
	if (arg == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return;
	}
	else if (arg == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return;
	}
	else if (arg == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}
	float f = static_cast<float>(strtod(tmp, &p));
	double d = static_cast<double>(f);
	int i = static_cast<int>(f);
	char c = static_cast<char>(i);
	if (&tmp[arg.length() - 1] != p)
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
	if (i != f || d > MAX || d < MIN)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg) - 1) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg) - 1) << d << std::endl;
		return;
	}
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg) - 1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg) - 1) << d << std::endl;
}

bool Sed::isDouble(std::string arg)
{
	for (std::string::size_type i = 0; i < arg.size(); i++)
		if (arg[i] == '.')
			return true;
	return false;
}

void Sed::convChar(std::string arg)
{
	char c = arg[1];
	int i = static_cast<int>(c);
	float f = static_cast<float>(c);
	double d = static_cast<double>(c);
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	/* Use fixed floating-point notation */
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void Sed::convInt(std::string arg)
{
	char *p;
	const char *tmp = arg.c_str();
	long li = strtol(tmp, &p, 10);
	int i = static_cast<int>(li);
	double d = static_cast<double>(i);
	float f = static_cast<float>(i);
	char c = static_cast<char>(i);
	if (&tmp[arg.length()] != p || li != static_cast<long>(i))
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

void Sed::convDouble(std::string arg)
{
	char *p;
	const char *tmp = arg.c_str();
	if (arg == "+inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
		return;
	}
	else if (arg == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
		return;
	}
	else if (arg == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return;
	}
	/* Convert string to double */
	double d = strtod(tmp, &p);
	float f = static_cast<float>(d);
	int i = static_cast<int>(d);
	char c = static_cast<char>(i);
	if (&tmp[arg.length()] != p)
	{
		std::cout << "Invalid input" << std::endl;
		return;
	}
	if (i != d || d > MAX || d < MIN)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(get_precision(arg)) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(get_precision(arg)) << d << std::endl;
		return;
	}
	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

