/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:49:38 by almichel          #+#    #+#             */
/*   Updated: 2024/07/17 19:22:53 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public  ScavTrap, public FragTrap
{
	private :
		
		std::string _name;

	public :
			DiamondTrap();
			DiamondTrap(std::string name);
			DiamondTrap(DiamondTrap const &src);
			DiamondTrap &operator=(DiamondTrap const & rhs);
			~DiamondTrap();
			
			void whoAmI(void);
			void displayInfo(void);
			std::string GetClapTrapName(void);
			void attack(const std::string &target);
			
};

#endif