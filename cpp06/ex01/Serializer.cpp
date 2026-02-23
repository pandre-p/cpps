#include "Serializer.hpp"

uintptr_t   Serialize::serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   Serialize::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

Serialize::Serialize()
{
	std::cout << "Serialize default constructor" << std::endl;
}

Serialize::Serialize(const Serialize &)
{
	std::cout << "Serialize copy constructor" << std::endl;
}
Serialize	&Serialize::operator=(const Serialize &)
{
	std::cout << "Serialize assignment operator" << std::endl;
	return (*this);
}
Serialize::~Serialize()
{
	std::cout << "Serialize destructor" << std::endl;
}