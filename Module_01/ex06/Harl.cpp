/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:57:44 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 17:33:00 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
	
}

int Harl::getLevel(const std::string& level) 
{
    if (level == "DEBUG") return 1;
    if (level == "INFO") return 2;
    if (level == "WARNING") return 3;
    if (level == "ERROR") return 4;
    return 0; 
}
	
Harl::~Harl()
{

}

void Harl::debug( void )
{
	std::cout	<< "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n";
	std::cout << '\n';
}

void Harl::info( void )
{
	std::cout	<< "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
	std::cout << '\n';
}

void Harl::warning( void )
{
	std::cout	<< "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
	std::cout << '\n';
}

void Harl::error( void )
{	std::cout	<< "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
	std::cout << '\n';
}

void Harl::complain(std::string& level)
{
        switch (getLevel(level)) 
		{
            case 1:
                Harl::debug();
				// fall through
            case 2:
                Harl::info();
				// fall through
            case 3:
                Harl::warning();
				// fall through
            case 4:
                Harl::error();
                break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
        }
}

