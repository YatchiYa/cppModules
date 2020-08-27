
#include <iostream>
#include <time.h>
#include "bureaucrat.hpp"
#include "form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat francis("Francis", 25);
	std::cout << francis << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	shrub->execute(francis);

	Form *pres = new PresidentialPardonForm("Francis");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(francis);
	francis.executeForm(*robot);
	francis.executeForm(*robot);

	std::cout << "---" << std::endl;

	try
	{
		francis.executeForm(*pres);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.execute(supervisor);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Francis");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		pres.execute(francis);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---" << std::endl;

	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Francis");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		francis.executeForm(pres);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete shrub;
	delete pres;
	delete robot;

	return (0);
}