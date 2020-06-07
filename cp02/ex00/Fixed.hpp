#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Fixed
{
public:
	Fixed();
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(Fixed const &f);
	Fixed &operator=(Fixed const &other);

private:
	int value;
	static const int bits = 8;
};


#endif // !FIXED_HPP

