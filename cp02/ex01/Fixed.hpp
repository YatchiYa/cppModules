#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>
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


	Fixed(int const value);
	Fixed(float const value);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int value;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif // !FIXED_HPP

