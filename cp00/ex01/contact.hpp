#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>



class Contact
{
public:

	Contact();
	void    getData();
	void    display_char(int index)const;
	void    printAll()const;

private:

	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_login;
	std::string m_postalAdress;
	std::string m_emailAdress;
	std::string m_phoneNumber;
	std::string m_birthday;
	std::string m_meal;
	std::string m_underwearColor;
	std::string m_darkestSecret;
};

#endif