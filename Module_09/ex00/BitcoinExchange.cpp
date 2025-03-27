#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string input_path)
{
    this->_input_path = input_path;
    this->_data_csv = "data.csv";
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
    *this = src;
}

BitcoinExchange &     BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	(void) rhs;
	return *this;
  
}

BitcoinExchange::~BitcoinExchange()
{

}
void BitcoinExchange::stockInputPath()
{
    std::ifstream inputFile(_input_path.c_str());
    if (!inputFile.is_open())
        throw ErrorFile();
}

const char *BitcoinExchange::ErrorFile::what() const throw()
{
	return ("can't open the input file");
}

const char *BitcoinExchange::ErrorData::what() const throw()
{
	return ("can't open the data file");
}
