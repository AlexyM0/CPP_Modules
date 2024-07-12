/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:54:31 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 17:19:07 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>


class Harl
{

	private :
		void debug( void );
 		void info( void );
 		void warning( void );
 		void error( void );
	
	public :
		Harl();
		~Harl();
		void complain(std::string& level);
		void (Harl::*functptr[4])();
		std::string	tab_str[4];
		int getLevel(const std::string& level);
};

#endif