#include "contact.hpp"

int     get_data_index(std::string indexString)
{
	int num;

	if (indexString.size() < 1)
		return -1;
	for (std::string::size_type i = 0; i < indexString.length(); i++)
	{
		if (indexString[i] < '0' || indexString[i] > '9')
			return -1;
	}
	std::stringstream ss(indexString);
	ss >> num;
	if (ss.fail())
		return -1;
	return num;
}

void    search(Contact book[8], int contact_nb)
{
	int i = 0;
	std::string indexString;
	int index;

	if (!contact_nb)
	{
		std::cout << "You have no entries." << std::endl;
		return;
	}

	std::cout << "You have the following contact entries :" << std::endl;
	std::cout << "Index     |First name|Last name |Nickname  " << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;

	while (i < contact_nb)
	{
		book[i].display_char(i);
		i++;
	}
	std::cout << "Which entry do you want to see ? " << std::endl << "> ";
	getline(std::cin, indexString);
	index = get_data_index(indexString);
	if (index >= 0 && index < contact_nb)
		book[index].printAll();
	else
		std::cout << "This index does not exist." << std::endl << "> ADD, SEARCH or EXIT ?" << std::endl;
}

int main()
{
	std::string input;
	int contact_nb = 0;
	Contact book[8];


	std::cout << "> ADD, SEARCH or EXIT ?" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "EXIT")
		{
			std::cout << "See ya !" << std::endl;
			return 0;
		}
		else if (input == "ADD")
		{
			if (contact_nb >= 8)
				std::cout << "You have reached the maximum number of contacts available. SEARCH or EXIT." << std::endl;
			else
			{
				book[contact_nb] = Contact();
				book[contact_nb].getData();
				contact_nb++;
			}
		}
		else if (input == "SEARCH")
			search(book, contact_nb);
		else if (input == "")
			;
		else
			std::cout << "commane error : please enter ADD, EXIT or SEARCH." << std::endl;
	}
	return 0;
}