/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:31:24 by bekinci-          #+#    #+#             */
/*   Updated: 2025/11/27 18:31:25 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Pls write: ./replace <dosya> <s1> <s2>" << std::endl;
		return (1);
	}
	Replace	fileReplacer(av[1], av[2], av[3]);
	if (fileReplacer.readFile())
		return (1);
	fileReplacer.replaceStrings();
	if (fileReplacer.writeFile())
		return (1);
	return (0);
}