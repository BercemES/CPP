/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:29:38 by bekinci-          #+#    #+#             */
/*   Updated: 2025/11/27 18:29:41 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
