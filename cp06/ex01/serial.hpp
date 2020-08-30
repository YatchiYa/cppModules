#ifndef SERIAL_HPP
# define SERIAL_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void);
Data *deserialize(void *raw);

#endif