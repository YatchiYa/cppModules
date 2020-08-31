
#include "Fixed.hpp"
#include <iostream>

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	//std::cout << "1 - " << a.getRawBits() << std::endl;
	std::cout << ++a << std::endl;
	//std::cout << "2 - " << a.getRawBits() << std::endl;
	std::cout << a << std::endl;
	//std::cout << "3 - " << a.getRawBits() << std::endl;
	std::cout << a++ << std::endl;
	//std::cout << "4 - " << a.getRawBits() << std::endl;
	std::cout << a << std::endl;
	//std::cout << "5 - " << a.getRawBits() << std::endl;
	std::cout << b << std::endl;
	//std::cout << "6 - " << b.getRawBits() << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;

	return (0);
}