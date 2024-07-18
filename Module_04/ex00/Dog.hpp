/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:14 by almichel          #+#    #+#             */
/*   Updated: 2024/07/18 02:29:17 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Animal const &src);
        Dog &operator=(Animal const &rhs);
        ~Dog();
        
        void makeSound(void) const;
        
    private :

};

#endif