/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 03:06:47 by almichel          #+#    #+#             */
/*   Updated: 2024/07/11 03:42:06 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombieHorde;
	int	i;
	if (N <= 0)
	{
		std::cout << "Invalide number";
		return NULL;
	}
	zombieHorde = new Zombie[N];
	for (i = 0; i < N; i++)
	{
		new(&zombieHorde[i]) Zombie(name);
	}

	return zombieHorde;
}

