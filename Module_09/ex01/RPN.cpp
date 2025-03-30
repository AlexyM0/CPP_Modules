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
    (void) rhs;
	return *this;
}

void RPN::mainFunc()
{
    try
    {
        checkSynthax(_av);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
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
}

const char *RPN::Error::what() const throw()
{
	return ("Error");
}

