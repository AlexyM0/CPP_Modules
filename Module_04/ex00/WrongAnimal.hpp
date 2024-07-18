/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 02:43:35 by almichel          #+#    #+#             */
/*   Updated: 2024/07/18 02:52:40 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#pragma once

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const & src);
        virtual ~WrongAnimal();
        
        WrongAnimal &     operator=(WrongAnimal const & rhs);

		void makeSound() const;
		std::string getType() const;
		void setType(std::string type);
		
    protected:
		std::string _type;
};

#endif