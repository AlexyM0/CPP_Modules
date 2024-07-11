/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 02:19:32 by almichel          #+#    #+#             */
/*   Updated: 2024/07/11 02:55:12 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

#include <iostream>

class Zombie
{	
	private:
	
		std::string _name;

	public:

		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
	
#endif