/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almichel <almichel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:18:59 by almichel          #+#    #+#             */
/*   Updated: 2024/07/12 04:31:54 by almichel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "files.hpp"

void replace_substring(std::string &line, const std::string &s1, const std::string &s2) 
{
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) 
	{
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos += s2.length();
    }
}

int replace_files(std::string file, std::string s1, std::string s2)
{
	Files Files(file);
	std::string line;
	std::ifstream infile(file.c_str());
	if (!infile) 
	{
        std::cerr << "ERROR: Cannot open infile" << std::endl;
        return (-1);
    }
	
	std::string outfile_name = file + ".replace";
	std::ofstream outfile(Files.getOutfile().c_str());
	if (!outfile) 
	{
        std::cerr << "ERROR: Cannot open outfile" << std::endl;
        return (-1);
    }
	while (std::getline(infile, line)) 
    {
        replace_substring(line, s1, s2);
        outfile << line << std::endl;
    }

	infile.close();
	outfile.close();
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "wrong number of args : <filename> <s1> <s2>\n";
		return (-1);
	}
	replace_files(av[1], av[2], av[3]);
	return (0);
}