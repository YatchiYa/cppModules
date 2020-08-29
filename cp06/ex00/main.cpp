
#include "sed.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "error: bad arguments\n" << std::endl;
		return 1;
	}
	std::string arg = argv[1];
	if (arg.size() > 1 && arg[arg.size() - 1] == 'f' && arg != "+inf" && arg != "-inf" && arg != "inf")
		Sed::convFloat(arg);
	else if (Sed::isDouble(arg.c_str()) || arg == "+inf" || arg == "-inf" || arg == "nan" || arg == "-nan" || arg == "inf")
		Sed::convDouble(arg);
	else if (arg.size() == 3 && arg[0] == '\'' && arg[2] == '\'')
		Sed::convChar(arg);
	else
		Sed::convInt(arg);
	return 0;
}