/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:50:53 by almichel          #+#    #+#             */
/*   Updated: 2024/07/19 01:36:48 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
#define BRAIN_H

#pragma once

#include "Animal.hpp"
#include <sstream>

class Brain
{
    public:

        Brain();
        Brain(std::string _type);
        Brain(Brain const &src);
        Brain &operator=(Brain const &rhs);
        ~Brain();
        
        void displayIdeas(void);
    
    private:

          std::string _ideas[100];
};

#endif