#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*strZombie = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		strZombie[i].set_name(name);
	}
	return (strZombie);
}
