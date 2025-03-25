#include "Span.hpp"

int main()
{
    try
    {
        int size = 10;
        Span span(size);
        span.addNumber(0);
        span.addNumber(1);
        span.addNumber(5);
        span.displayContainer();
        std::cout << "longest span = " << span.longestSpan() << std::endl;
	    std::cout << "shortest span = " << span.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------" << std::endl;
    
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------" << std::endl;
}
