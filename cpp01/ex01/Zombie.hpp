#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(void);
	~Zombie();
	Zombie(std::string name);
	void	announce(void);
	void	set_name(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
