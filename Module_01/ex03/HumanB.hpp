/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 01:00:14 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 01:51:13 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_HPP
#define HUMAN_B_CLASS_HPP

#include "Weapon.hpp"

class HumanB
{
	public :
	
		HumanB(std::string name);
		~HumanB();
		
		Weapon *Weapons;
		std::string name;
		
		void setWeapon(Weapon &weapon);
		void	attack();

};



#endif