
#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.getRawBits();
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

Fixed &Fixed::operator=(Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = f.getRawBits();
	return (*this);
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (value << Fixed::bits);
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(value * (1 << Fixed::bits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}

// a << Fixed::bits = a x 2^Fixed::bits
// 1 << Fixed::bits = 1 x 2^Fixed::bits = 256
float Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

// a >> Fixed::bits = a / 2^Fixed::bits
int Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}
