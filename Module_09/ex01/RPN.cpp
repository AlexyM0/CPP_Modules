#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(std::string av)
{
    _av = av;
}

RPN::~RPN()
{

}
RPN::RPN(RPN const & src)
{
    *this = src;
}

RPN &     RPN::operator=(RPN const & rhs)
{
    if(this != &rhs)
	{
		this->_av = rhs._av;

	}
	return *this;
}

void RPN::mainFunc()
{
    try
    {
        checkSynthax(_av);
        calcul(_av);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

bool RPN::isNumber(const std::string& s)
{
    if (s.empty()) return false;
    for (size_t i = 0; i < s.length(); ++i) {
        if (!isdigit(s[i])) return false;
    }
    return true;
}

bool RPN::isOperator(const std::string& s) 
{
    return s == "+" || s == "-" || s == "*" || s == "/";
}

void RPN::checkSynthax(std::string av)
{
    for (size_t i = 0; i < av.length(); ++i) 
    {
        if (i % 2 != 0 && av[i] != ' ')
            throw Error();
    }
    for (size_t i = 0; i < av.length(); ++i) 
    {
        if ((av[i] < '0' || av[i] > '9') && av[i] != '*' && av[i] != '+' && av[i] != '-' && av[i] != '/' && i % 2 == 0)
            throw Error();
    }
    if (av.length() < 5)
        throw Error();
}

void RPN::calcul(std::string av)
{
    std::istringstream iss(av);
    std::string token;
    int result = 0;

    while (iss >> token) 
    {
        if (isNumber(token))
        {
            std::stringstream ss(token);
            int value;
            ss >> value;
            _stack.push(value);
        }
        else if (isOperator(token)) 
        {
            if (_stack.size() < 2)
                throw Error();
            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();

            if (token == "+") 
                result = a + b;
            else if (token == "-")
                result = a - b;
            else if (token == "*")
                result = a * b;
            else if (token == "/")
            {
                if (b == 0)
                    throw Error();
                result = a / b;
            }
            _stack.push(result);
        }

    }
    if (_stack.size() != 1)
        throw Error();
    std::cout << _stack.top() << std::endl;
}
const char *RPN::Error::what() const throw()
{
	return ("Error");
}

