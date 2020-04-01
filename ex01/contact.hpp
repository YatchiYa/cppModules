
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	int					index;
	std::string	FirstName;
	std::string	LastName;
	std::string	Nickname;
	std::string	Login;
	std::string	Address;
	std::string	Email;
	std::string	Phone;
	std::string	Birthday;
	std::string	FavoriteMeal;
	std::string	UnderwearColor;
	std::string	Secret;
		
public:
	Contact();
	virtual ~Contact();

	void			set_contact(int mode, std::string str);
	void			set_index(int mode);
	int				get_index();
	std::string		get_contact(int mode);
	void			print_contact_header(int i);
};

#endif