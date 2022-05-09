#include "Serialization.hpp"
#include "Data.hpp"

uintptr_t	Serialization::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	Serialization::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

Serialization::Serialization(void)
{
}

Serialization::Serialization(const Serialization& origin)
{
	static_cast<void>(origin);
}

Serialization::~Serialization(void)
{
}

Serialization& Serialization::operator=(const Serialization& other)
{
	static_cast<void>(other);
	return (*this);
}
