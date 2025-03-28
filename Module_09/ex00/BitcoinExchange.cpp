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
    // if(_file.is_open() == true)
	// 	_file.close();
	// if(_file_database.is_open() == true)
	// 	_file_database.close();
}

void BitcoinExchange::checkValideFormat(std::string line_to_check)
{
	size_t i = 0;
	int count = 0;

	while(std::isdigit(line_to_check[i]) || line_to_check[i] == '-')
		if(line_to_check[i++] == '-')
			count++;
	if(count != 2)
		throw Error("Error: wrong date format");

	count = 0;
	if(std::strncmp(&line_to_check[i], " | ", 3))
		throw Error("Error: wrong format");
	i += 3;

	while(std::isdigit(line_to_check[i]) || line_to_check[i] == '.' || line_to_check[i] == '-')
	{
		if(line_to_check[i] == '.')
			count++;
		if(line_to_check[i++] == '-')
			throw Error("Error: not a positive number.");
	}
	if(count > 1)
		throw Error("Error: Number Format");
	if(i != line_to_check.size())
		throw Error("Error: wrong format");
}

float BitcoinExchange::checkValideNumber(std::string bitcoin_nb)
{
	float result = atof(bitcoin_nb.c_str());
	if(bitcoin_nb.empty())
		throw Error("Error: no number found");
	if (result < 0)
		throw Error("Error: not a positive number.");
	if (result > 1000)
		throw Error("Error: too large a number.");
	return (result);
}   

void BitcoinExchange::storeFile()
{
	std::string line , date, value;
	std::getline(_file_database, line);
	while(std::getline(_file_database, line))
	{
		std::stringstream ss(line);
		if(std::getline(ss, date, ',') && std::getline(ss, value, '\n'))
			storeData(date, value);
	}
}

void BitcoinExchange::storeData(std::string str_date, std::string bitcoin_value)
{
	tm dateInfo = {};
	if (strptime(str_date.c_str(), "%Y-%m-%d", &dateInfo) == NULL)
       throw Error("Invalide date in csv");
	time_t date = mktime(&dateInfo);
	float float_value = atof(bitcoin_value.c_str());
	if(float_value < 0)
		throw Error("Invalide date value in csv");
	_data.insert(std::make_pair(date, float_value));
}

time_t BitcoinExchange::checkValideDate(std::string str_date)
{
	tm dateInfo = {};
	if (strptime(str_date.c_str(), "%Y-%m-%d", &dateInfo) == NULL)
       throw Error("Error: bad input => " + str_date);
	time_t date = mktime(&dateInfo);
	return (date);
}

void BitcoinExchange::parseFile(std::string date, std::string bitcoin_nb)
{
	time_t valide_date = checkValideDate(date);
	float valide_bitcoin_nb = checkValideNumber(bitcoin_nb);
	std::map<time_t, float>::iterator it;
	it = _data.lower_bound(valide_date);
	if (it == _data.begin() && it->first != valide_date)
			throw Error("Error: no info for " + date + "this date is to old");
	else if (it->first != valide_date)
		it--;
	std::cout << date << "=> " << bitcoin_nb << " = " << it->second * valide_bitcoin_nb << std::endl;
}

void BitcoinExchange::stockInputPath()
{
    std::ifstream inputFile(_input_path.c_str());
    if (!inputFile.is_open())
        throw ErrorFile();
    std::string line , date, value;
    while (std::getline(inputFile, line)) 
    {
        try
        {
            checkValideFormat(line);
            std::stringstream ss(line);
            std::getline(ss, date, '|');
            std::getline(ss, line, ' ');
            std::getline(ss, value, ' ');
            parseFile(date, value);
            date.clear();
            value.clear();
        }
        catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
    }
    inputFile.close();
}

const char *BitcoinExchange::ErrorFile::what() const throw()
{
	return ("can't open the input file");
}

const char *BitcoinExchange::ErrorData::what() const throw()
{
	return ("can't open the data file");
}

BitcoinExchange::Error::Error(std::string const &msg): _msg(msg)
{

}

const char* BitcoinExchange::Error::what() const throw()
{
	return (_msg.c_str());
}
