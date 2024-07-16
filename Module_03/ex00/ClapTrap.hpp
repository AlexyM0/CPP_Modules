/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 03:20:21 by almichel          #+#    #+#             */
/*   Updated: 2024/07/16 18:48:02 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{

	private :

		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
	
	public :
		
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const & rhs);
		~ClapTrap();
		
		int	GetAttack();
		void SetAttack(int attack);
		int GetEnergy();
		int GetHp();
		std::string GetName();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void displayInfo();
		
};

#endif
