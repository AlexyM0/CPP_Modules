/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 02:19:32 by almichel          #+#    #+#             */
/*   Updated: 2024/07/11 03:41:34 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#pragma once

#include <string.h>
#include <iostream>

class Zombie
{	
	private:
	
		std::string _name;

	public:

		Zombie() {};
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
		std::string getName() const;
};

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
	Zombie* zombieHorde(int N, std::string name );
	
	
#endif