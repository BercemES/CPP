#include "Zombie.hpp"

int main(void)
{
	Zombie	*z = newZombie("Bercem");
	z->announce();
	delete z;
	randomChump("Selcuk");
}
