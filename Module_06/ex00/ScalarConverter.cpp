#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(ScalarConverter const & src)
{
    *this = src;
}


ScalarConverter&     ScalarConverter::operator=(ScalarConverter const & rhs)
{
	if (this != &rhs)
	{
		return *this;
	}
	return *this;
}

ScalarConverter::~ScalarConverter()
{

}

void ScalarConverter::convert(std::string const &nbr)
{
    if (checkValideNumber(nbr) == true)
    {
        convertToChar(nbr);
        convertToInt(nbr);
        convertToFloat(nbr);
        convertToDouble(nbr);
    }
    else
        throw ScalarConverter::NotValide();
}

void ScalarConverter::convertToChar(std::string const &nbr)
{
    if(checkSpecific(nbr) == true)
		std::cout << "char: impossible" << std::endl;
	else
	{
		double result = atof(nbr.c_str());

		std::cout << "char: ";
		if (result >= 32 && result <= 126)
			std::cout << static_cast<char>(result) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	return ;
}

void ScalarConverter::convertToInt(std::string const &nbr)
{
    if (checkLimit(nbr) == true|| checkSpecific(nbr) == true)
        std::cout << "Int : impossible" << std::endl;
    else
    {
        int result = atoi(nbr.c_str());
        std::cout << "Int : " << result << std::endl;
    }
}

void ScalarConverter::convertToFloat(std::string const &nbr)
{
    double result = atof(nbr.c_str());
	int precision = findPrecision(nbr);
	std::cout << "float: " << std::fixed << std::setprecision(precision) << static_cast<float>(result) << "f" << std::endl;
	return ;
}

void ScalarConverter::convertToDouble(std::string const &nbr)
{
    double result = atof(nbr.c_str());

	std::cout << "Double: " << std::fixed <<result << std::endl;
	return ;
}

bool  ScalarConverter::checkValideNumber(std::string const &nbr)
{
    int count;

    count = 0;
    for (size_t i = 0; i < nbr.size(); ++i)
    {
        if (nbr[i] == '.')
            count++;
    }
    if (count > 1)
        return (false);
    return (true);
}

const char* ScalarConverter::NotValide::what() const throw()
{
	return ("not a valide number");
}

bool ScalarConverter::checkSpecific(std::string const &input)
{
	double result = atof(input.c_str());
	std::ostringstream strs;
	strs << result;
	std::string str = strs.str();

	if (str == "nan" || str == "-inf" || str == "+inf" || str == "inf")
		return true;
	return false;
}

bool ScalarConverter::checkLimit(std::string const &input)
{
	long long result = atoll(input.c_str());
    size_t len = 0;

    len = strlen(input.c_str());
    if(len > 19)
    {
        return true;
    }
	if(result < -2147483648 || result > 2147483647)
		return true;
	return false;
}

int ScalarConverter::findPrecision(std::string const &input)
{
	size_t decimal_pos = input.find(".");
	if(decimal_pos != std::string::npos)
		return(input.size() - decimal_pos - 1);
	return 0;
}
