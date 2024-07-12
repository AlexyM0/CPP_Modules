/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 04:11:13 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 04:33:19 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILES_H
#define FILES_H

#include <iostream>
#include <fstream>

class Files
{
	private:
		std::string _infile;
		std::string _outfile;

	public:
		Files(const std::string &filename);
		~Files (void);
		const std::string getOutfile();
};
#endif