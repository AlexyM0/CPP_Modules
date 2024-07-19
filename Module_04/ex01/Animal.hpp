/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:26 by almichel          #+#    #+#             */
/*   Updated: 2024/07/18 02:27:37 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#pragma once

#include <iostream>

class Animal
{
    public:

        Animal();
        Animal(Animal const &src);
        Animal &operator=(Animal const &rhs);
        virtual ~Animal();
        virtual void makeSound(void) const;
        std::string getType(void) const;
        
    protected :

        std::string _type;
    
    private :

};

#endif