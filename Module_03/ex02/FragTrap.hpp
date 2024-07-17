/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:18:04 by almichel          #+#    #+#             */
/*   Updated: 2024/07/17 16:45:31 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(ClapTrap const &src);
		FragTrap &operator=(FragTrap const & rhs);
		~FragTrap();
		
		void highFivesGuys(void);
		void takeDamage(unsigned int amount);
		void attack(const std::string &target);
		
	private :
};

#endif