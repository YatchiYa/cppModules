
#include "Contact.hpp"

Contact::Contact()
{
}

void    Contact::getData()
{
	std::cout << "first name :" << "> ";
	getline(std::cin, m_firstName);
	std::cout << "last name :" << "> ";
	getline(std::cin, m_lastName);
	std::cout << "nickname :"  << "> ";
	getline(std::cin, m_nickname);
	std::cout << "login :"  << "> ";
	getline(std::cin, m_login);
	std::cout << "address :"  << "> ";
	getline(std::cin, m_postalAdress);
	std::cout << "email :"  << "> ";
	getline(std::cin, m_emailAdress);
	std::cout << "phone number :"  << "> ";
	getline(std::cin, m_phoneNumber);
	std::cout << "birthday :"  << "> ";
	getline(std::cin, m_birthday);
	std::cout << "favorite food :" << "> ";
	getline(std::cin, m_meal);
	std::cout << "underwear color :" << "> ";
	getline(std::cin, m_underwearColor);
	std::cout << "darkest secret :" << "> ";
	getline(std::cin, m_darkestSecret);
	std::cout << "Contact created!" << std::endl;
}

void    display_column(std::string s)
{
	std::string::size_type j = 0;
	for (std::string::size_type i = 0; i < 9; i++)
	{
		if (10 - i > s.size())
			std::cout << ' ';
		else
			std::cout << s[j++];
	}
	if (!s.size())
		std::cout << ' ';
	else if (s.size() <= 10)
		std::cout << s[j];
	else
		std::cout << '.';
}

void    Contact::display_char(int index)const
{
	std::stringstream ss;
	ss << index;
	display_column(ss.str());
	std::cout << '|';
	display_column(m_firstName);
	std::cout << '|';
	display_column(m_lastName);
	std::cout << '|';
	display_column(m_nickname);
	std::cout << std::endl;
}

void    Contact::printAll()const
{
	std::cout << "First name: " << m_firstName << std::endl;
	std::cout << "Last name: " << m_lastName << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Login: " << m_login << std::endl;
	std::cout << "Postal address: " << m_postalAdress << std::endl;
	std::cout << "Email address: " << m_emailAdress << std::endl;
	std::cout << "Phone number: " << m_phoneNumber << std::endl;
	std::cout << "Birthday date: " << m_birthday << std::endl;
	std::cout << "Favorite meal: " << m_meal << std::endl;
	std::cout << "Underwear color: " << m_underwearColor << std::endl;
	std::cout << "Darkest secret: " << m_darkestSecret << std::endl;
}

