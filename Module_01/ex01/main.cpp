/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 02:47:23 by almichel          #+#    #+#             */
/*   Updated: 2024/07/11 03:27:36 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int	i;
	int	N;

	N = 10;
	Zombie* horde = zombieHorde(N, "Zombie");
    if (!horde) {
        return 1;
    }
	for (i = 0; i < N; i++) 
	{
        horde[i].announce();
    }
    delete [] horde;
	return (0);
}
