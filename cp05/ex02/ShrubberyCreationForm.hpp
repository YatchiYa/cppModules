
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include "form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

	std::string const target;
	static std::string const trees[3];
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	virtual ~ShrubberyCreationForm();

	static std::string const &name;

	class TargetFileOpenException : public std::exception {
		virtual const char* what() const throw();
	};
	class WriteException : public std::exception {
		virtual const char* what() const throw();
	};

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

	void execute(Bureaucrat const &executor) const;
};

#endif