#pragma once

#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <cstring>

class BitcoinExchange
{
    public:

        BitcoinExchange(std::string input_path);
        BitcoinExchange(BitcoinExchange const & src);
        BitcoinExchange &     operator=(BitcoinExchange const & rhs);
        ~BitcoinExchange();

        void stockInputPath();
        class ErrorFile: public std::exception
		{
			public:
				virtual const char* what() const throw();
        };
        class ErrorData: public std::exception
		{
			public:
				virtual const char* what() const throw();
        };

    private :

        std::string _input_path;
        std::string _data_csv;
};