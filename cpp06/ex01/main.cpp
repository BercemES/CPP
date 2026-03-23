#include "Serializer.hpp"

int main()
{
	Data *p = new Data;
	p->id = 1234;
	p->name = "Bercem";

	std::cout << "ORIGINAL" <<std::endl;
	std::cout << "address: " << p <<std::endl;
	std::cout << "id: " << p->id <<std::endl;
	std::cout << "name: " << p->name <<std::endl;

	uintptr_t	raw;
	raw = Serializer::serialize(p);
	std::cout << "serialize address: " << raw <<std::endl;

	Data *ptr;
	ptr = Serializer::deserialize(raw);
	std::cout << "deserialize address: " << ptr <<std::endl;
	std::cout << "deserialize id: " << ptr->id <<std::endl;
	std::cout << "deserialize name: " << ptr->name <<std::endl;

	if (p == ptr)
        std::cout << GREEN "🥳 [SUCCESS] ORIGINAL AND DESERIALIZED POINTERS MATCH." RESET << std::endl;
	else
		std::cout << RED "😓 [FAILURE] Pointers do not match!" RESET << std::endl;

	delete p;
}