/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 04:14:18 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 04:32:21 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "files.hpp"

Files::Files(const std::string &filename)
    : _infile(filename), _outfile(filename + ".replace") 
{
	
}

Files::~Files() 
{
	
}

const std::string Files::getOutfile()
{
    return _outfile;
}
