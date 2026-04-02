/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 12:06:31 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 12:06:33 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstddef>

template <typename T, typename F>
void	iter(T* array, const size_t length, F function)
{
	if (!array || !function)
		return ;
	
	for (size_t i = 0; i < length; i++)
	{
		function(array[i]);
	}	
}

#endif