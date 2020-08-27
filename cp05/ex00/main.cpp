
#include <iostream>
#include "bureaucrat.hpp"

int main(void)
{

	try
	{
		Bureaucrat ziggs("Ziggs", 100);
		std::cout << ziggs << std::endl;
		ziggs.incrementGrade();
		std::cout << ziggs << std::endl;
		ziggs.decrementGrade();
		std::cout << ziggs << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Teemo", 0);
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 1000);
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 1);
		std::cout << jack << std::endl;
		jack.incrementGrade();
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat jack("Jack", 150);
		std::cout << jack << std::endl;
		jack.decrementGrade();
		std::cout << jack << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}