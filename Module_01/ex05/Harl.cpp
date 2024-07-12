/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:57:44 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 16:38:12 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
	functptr[0] = &Harl::debug;
	functptr[1] = &Harl::info;
	functptr[2] = &Harl::warning;
	functptr[3] = &Harl::error;

	tab_str[0] = "DEBUG";
	tab_str[1] = "INFO"; 
	tab_str[2] = "WARNING";
	tab_str[3] = "ERROR";
}

Harl::~Harl()
{

}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n";
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
	for(int i = 0; i < 4; i++)
	{
		if(level == this->tab_str[i])
		{
			(this->*functptr[i])();
			return ;
		}
	}
}