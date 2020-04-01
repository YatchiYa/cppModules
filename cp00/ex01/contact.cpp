
#include "contact.hpp"

Contact::Contact()
{
	this->FirstName = std::string();
	this->LastName = std::string();
	this->Nickname = std::string();
	this->Login = std::string();
	this->Address = std::string();
	this->Email = std::string();
	this->Phone = std::string();
	this->Birthday = std::string();
	this->FavoriteMeal = std::string();
	this->UnderwearColor = std::string();
	this->Secret = std::string();
}

Contact::~Contact()
{
}

void	Contact::set_contact(int mode, std::string str)
{
	if (mode == 1)
		this->FirstName = str;
	else if (mode == 2)
		this->LastName = str;
	else if (mode == 3)
		this->Nickname = str;
	else if (mode == 4)
		this->Login = str;
	else if (mode == 5)
		this->Address = str;
	else if (mode == 6)
		this->Email = str;
	else if (mode == 7)
		this->Phone = str;
	else if (mode == 8)
		this->Birthday = str;
	else if (mode == 9)
		this->FavoriteMeal = str;
	else if (mode == 10)
		this->UnderwearColor = str;
	else if (mode == 11)
		this->Secret = str;
}

void	Contact::set_index(int mode)
{
	this->index = mode;
}

int	Contact::get_index()
{
	return (this->index);
}

std::string		Contact::get_contact(int mode)
{
	if (mode == 1)
		return (this->FirstName);
	else if (mode == 2)
		return (this->LastName);
	else if (mode == 3)
		return (this->Nickname);
	else if (mode == 4)
		return (this->Login);
	else if (mode == 5)
		return (this->Address);
	else if (mode == 6)
		return (this->Email);
	else if (mode == 7)
		return (this->Phone);
	else if (mode == 8)
		return (this->Birthday);
	else if (mode == 9)
		return (this->FavoriteMeal);
	else if (mode == 10)
		return (this->UnderwearColor);
	else if (mode == 11)
		return (this->Secret);
}

void			Contact::print_contact_header(int i)
{
	if (i == 1)
		std::cout << "First name: ";
	else if (i == 2)
		std::cout << "Last name: ";
	else if (i == 3)
		std::cout << "Nickname: ";
	else if (i == 4)
		std::cout << "Login: ";
	else if (i == 5)
		std::cout << "Address: ";
	else if (i == 6)
		std::cout << "Email: ";
	else if (i == 7)
		std::cout << "Phone: ";
	else if (i == 8)
		std::cout << "Birthday: ";
	else if (i == 9)
		std::cout << "FavoriteMeal: ";
	else if (i == 10)
		std::cout << "UnderwearColor: ";
	else if (i == 11)
		std::cout << "Secret: ";
}


