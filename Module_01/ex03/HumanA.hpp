/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 00:08:05 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 02:20:27 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_HPP
#define HUMAN_A_CLASS_HPP

#include "Weapon.hpp"

class HumanA
{
	private :
		std::string name;
		Weapon &Weapons;
	public :
	
		HumanA(std::string, Weapon &Weapon);
		~HumanA();
		void	attack();

};



#endif