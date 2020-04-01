
#include "contact.hpp"
#include "list.hpp"

void	add(List *list_contact)
{
	int				ret;
	Contact			newContact;

	ret = 1;
	newContact = Contact();
	newContact.set_index(list_contact->get_contacts().size() + 1);
	while (ret <= 11)
	{
		std::string		str;

		while (str.size() == 0)
		{
			newContact.print_contact_header(ret);
			std::getline(std::cin, str);
			newContact.set_contact(ret, str);
		}
		ret++;
	}
	list_contact->add_contact(newContact);
	std::cout << "\n Contact added \n" << std::endl;
}

void	trim(std::string str)
{
	int		i;

	i = -1;
	while (++i < (10 - str.size()))
		std::cout << " ";
	i = 0;
	while (i < str.size() && i < 10)
	{
		if (str.size() > 10 && i == 10)
			break;
		std::cout << str[i];
		i++;
	}
	if (str.size() > 10)
		std::cout << ".|" << std::endl;
	else
		std::cout << "|" << std::endl;
}

void	show(List list_contact)
{
	int				ret;
	std::string		str;
	std::vector<Contact> list;

	ret = 0;
	list = list_contact.get_contacts();
	std::cout << "     index|";
	std::cout << "First name|";
	std::cout << " Last name|";
	std::cout << "  Nickname|\n";
	std::cout << "-------------------------------------------- " << std::endl;

	while (ret < list.size())
	{
		std::cout << "         " << list[ret].get_index() << "|";
		trim(list[ret].get_contact(1));
		std::cout << std::endl;
		ret++;
	}
	std::cout << std::endl;
}

void	show_spec(List list_contact, std::string index)
{
	int				ret;
	int				i;
	std::vector<Contact> list;

	ret = 0;
	list = list_contact.get_contacts();
	std::cout << "\n --- Contact information ---" << std::endl;
	while (ret < list.size() && ret < std::stoi(index))
		ret++;
	i = 1;
	ret--;
	while (i <= 11)
	{
		list[ret].print_contact_header(i);
		std::cout << list[ret].get_contact(i) << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	search(List list_contact)
{
	std::string		commande;

	show(list_contact);
	while ((commande.size() == 0 || commande > "8" || commande <= "0"
		|| std::stoi(commande) > list_contact.get_contacts().size())
		&& (commande != "EXIT"))
	{
		std::cout << "Enter index : ";
		std::getline(std::cin, commande);
	}
	if (commande != "EXIT")
		show_spec(list_contact, commande);
}