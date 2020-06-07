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


	Fixed(int const value);
	Fixed(float const value);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator=(Fixed const &other);
	bool operator>(Fixed const &other) const;
	bool operator<(Fixed const &other) const;
	bool operator>=(Fixed const &other) const;
	bool operator<=(Fixed const &other) const;
	bool operator==(Fixed const &other) const;
	bool operator!=(Fixed const &other) const;

	Fixed operator+(Fixed const &other);
	Fixed operator-(Fixed const &other);
	Fixed operator*(Fixed const &other);
	Fixed operator/(Fixed const &other);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);

private:
	int value;
	static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif // !FIXED_HPP

