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
        
        void storeData(std::string str_date, std::string bitcoin_value);
        void storeFile();
        void stockInputPath();
        void checkValideFormat(std::string line_to_check);
        void parseFile(std::string date, std::string bitcoin_nb);
        float checkValideNumber(std::string bitcoin_nb);
        time_t checkValideDate(std::string str_date);
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
        class Error: public std::exception
		{
			public:
				virtual const char* what() const throw();
				Error(std::string const &msg);
				virtual ~Error() throw() {};
			private:
				std::string _msg;
		};

    private :

        std::string _input_path;
        std::string _data_csv;
        std::ifstream 	_file_database;
		std::ifstream 	_file_input;
        //std::map<std::time_t, float> _file;
        std::map<std::time_t, float> _data;
};