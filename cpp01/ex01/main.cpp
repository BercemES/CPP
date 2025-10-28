#include "Zombie.hpp"

int main(void)
{
	int	N;
	N = 5;

	Zombie *horde = zombieHorde(N, "Bercem");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
