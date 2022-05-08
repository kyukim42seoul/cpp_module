#ifndef __SERIALIZATION_HPP__
#define __SERIALIZATION_HPP__

#include <cstdint>

class Data;
class Serialization
{
public:
	uintptr_t	serialize(Data* ptr);
	Data*		deserialize(uintptr_t raw);
	Serialization(void);
	~Serialization(void);
};

#endif
