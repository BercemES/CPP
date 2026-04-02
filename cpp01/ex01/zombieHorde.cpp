/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:29:45 by bekinci-          #+#    #+#             */
/*   Updated: 2025/11/27 18:29:46 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
