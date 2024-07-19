/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:26 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 17:06:05 by almichel         ###   ########.fr       */
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

        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
        
    protected :

        std::string _type;
    
    private :

};

#endif