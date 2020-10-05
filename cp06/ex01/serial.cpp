
#include "serial.hpp"

/* Reinterpret cast : instructs the compiler to treat expression as if it had the type new_type.
Dans cet exercice, on ne peut pas utiliser static_cast car un int * est un pointeur sur 4-byte, et un char *
un pointeur sur un seul. Static_cast emp�cherait ce type de cast � la compilation.
Or on veut ecrire un int sur 4 byte entre deux suites de char d'un byte qu'on write un par un. */

void *serialize(void)
{
	static std::string alphabet = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static size_t alphabetLength = alphabet.length();
	char *raw;

	raw = new char[20];
	for (int i = 0; i < 8; i++)
		raw[i] = alphabet[rand() % alphabetLength];
	*reinterpret_cast<int*>(raw + 8) = rand() % 42;
	for (int i = 0; i < 8; i++)
		raw[i + 12] = alphabet[rand() % alphabetLength];
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(raw), 8);
	d->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	d->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (d);
}
