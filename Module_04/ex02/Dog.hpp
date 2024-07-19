/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:04:14 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 04:16:42 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(std::string name);
        Dog(Dog const &src);
        Dog &operator=(Dog const &rhs);
        ~Dog();
        
        void makeSound(void) const;
        Brain &getBrain() const;
    private :
        
        Brain* _brain;

};

#endif