
#include "contact.hpp"
#include "list.hpp"
#include "utils.hpp"

int		main(void)
{
	bool		show;
	std::string commande;
	List	list_contact;

	show = true;

	std::cout << "# Welcome" << std::endl;
	std::cout << "# Enter your command [ADD, SEARCH, EXIT]:" << std::endl;

	while (show)
	{
		std::cout << "> ";
		std::getline(std::cin, commande);
		if (commande == "ADD")
			add(&list_contact);
		else if (commande == "SEARCH")
			search(list_contact);
		else if (commande == "EXIT")
		{
			std::cout << "# Bye." << std::endl;
			show = false;
		}
	}
	return (0);
}