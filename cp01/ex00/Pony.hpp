#pragma once

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
public:
	Pony();
	virtual ~Pony();

	void			run(void);
	void			jump(void);
	void			setName(std::string str);
	std::string		getName(void);

private:
	std::string		name;
};

#endif