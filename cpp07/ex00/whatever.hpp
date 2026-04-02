/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekinci- <bekinci-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 16:15:30 by bekinci-          #+#    #+#             */
/*   Updated: 2026/04/02 16:15:32 by bekinci-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& x, T& y)
{
	T temp;

	temp = x,
	x = y;
	y = temp;
}

template <typename T>
T	min(T x, T y)
{
	return (x < y ? x : y);
}

template <typename T>
T	max(T x, T y)
{
	return ( x > y ? x : y);
}

#endif