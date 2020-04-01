
#ifndef LIST_HPP
# define LIST_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <vector> 
# include "contact.hpp"

class List
{
private:
	std::vector<Contact> contacts;
	int					 size;

public:
	List();
	virtual ~List();

	void					add_contact(Contact c);
	std::vector<Contact>	get_contacts();
};

#endif