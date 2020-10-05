
#include "serial.hpp"


int main()
{
	srand(time(NULL));
	void *raw = serialize();
	Data *data = deserialize(raw);
	std::cout << "s = " << data->s1 << ", n = " << data->n << ", s2 = " << data->s2 << std::endl;
	delete[] reinterpret_cast<uint8_t*>(raw);
	delete data;
}