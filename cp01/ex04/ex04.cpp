
#include <iostream>
#include <string>

int main(void)
{
	std::string	str;
	std::string	*str_ptr;
	std::string	&str_ref = str;

	str = "HI THIS IS BRAIN";
	str_ptr = &str;
	std::cout << "    str: " << str << std::endl;
	std::cout << "ptr_str: " << *str_ptr << std::endl;
	std::cout << "ref_str: " << str_ref << std::endl;
	return (0);
}