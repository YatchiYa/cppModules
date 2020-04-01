
#include "list.hpp"

List::List()
{
	this->size = 0;
}

List::~List()
{}

void	List::add_contact(Contact c)
{
	if (this->contacts.size() <= 8)
		this->contacts.push_back(c);
	else
		std::cout << " it's full sorry !! " << std::endl;
}

std::vector<Contact>	List::get_contacts()
{
	return (this->contacts);
}