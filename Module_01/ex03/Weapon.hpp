/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:56:48 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 02:07:52 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <iostream>

class Weapon
{
	private :

		std::string _type;

	public :

		Weapon(std::string type_weapon);
		~Weapon();
		const std::string getType();
		void setType(std::string);
	

};

#endif