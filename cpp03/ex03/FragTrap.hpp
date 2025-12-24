/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bercem <bercem@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:21:22 by bekinci-          #+#    #+#             */
/*   Updated: 2025/12/25 02:05:48 by bercem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const std:: string& name);
		FragTrap(const FragTrap& src);
		~FragTrap();
		FragTrap& operator=(const FragTrap& src);
		
		void highFivesGuys(void);
};

#endif
