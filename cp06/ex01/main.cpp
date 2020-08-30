
#include "serial.hpp"

/* Reinterpret cast : instructs the compiler to treat expression as if it had the type new_type.
Dans cet exercice, on ne peut pas utiliser static_cast car un int * est un pointeur sur 4-byte, et un char *
un pointeur sur un seul. Static_cast empêcherait ce type de cast à la compilation.
Or on veut écrire un int sur 4 byte entre deux suites de char d'un byte qu'on write un par un. */

void * serialize(void)
{
	srand(time(NULL));
	static std::string alnum = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
	static size_t size = alnum.size();
	/* uint8_t is the same as a byte. */
	uint8_t *raw = new uint8_t[8 + 4 + 8];
	for (size_t i = 0; i < 8; i++)
		raw[i] = alnum[rand() % size];
	*reinterpret_cast<int*>(raw + 8) = rand() % 42;
	for (size_t i = 0; i < 8; i++)
		raw[8 + 4 + i] = alnum[rand() % size];
	return reinterpret_cast<void*>(raw);
}

Data * deserialize(void * raw)
{
	Data *data = new Data;

	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (data);
}

int main()
{
	void *raw = serialize();
	Data *data = deserialize(raw);
	std::cout << "s = " << data->s1 << ", n = " << data->n << ", s2 = " << data->s2 << std::endl;
	delete[] reinterpret_cast<uint8_t*>(raw);
	delete data;
}