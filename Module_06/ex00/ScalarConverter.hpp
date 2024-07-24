#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#pragma once

#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include <cstring>

class ScalarConverter
{
     public:

            ~ScalarConverter();
            static void convert(std::string const &nbr);
            static bool checkValideNumber(std::string const &nbr);
            static void convertToChar(std::string const &nbr);
            static void convertToInt(std::string const &nbr);
            static void convertToFloat(std::string const &nbr);
            static void convertToDouble(std::string const &nbr);
            
            static bool checkSpecific(std::string const &nbr);
            static bool checkLimit(std::string const &nbr);
            static int findPrecision(std::string const &nbr);

            class NotValide : public std::exception
            {
                  public:
				virtual const char* what() const throw();
            };

     private:
            ScalarConverter(ScalarConverter const &src);
            ScalarConverter &operator=(ScalarConverter const &rhs);
            ScalarConverter();
};

#endif