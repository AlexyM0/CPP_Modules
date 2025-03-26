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
    try
    {
        int size = 10;
        Span span2(size);

        span2.addNumber(0);
        span2.addNumber(1);
        span2.addNumber(5);

        std::vector<int> moreNumbers;
        moreNumbers.push_back(7);
        moreNumbers.push_back(3);
        moreNumbers.push_back(8);
        moreNumbers.push_back(9);
        moreNumbers.push_back(2);

        span2.addNumber2(moreNumbers.begin(), moreNumbers.end());
        std::cout << "Added by iterator method : " << std::endl;
        span2.displayContainer();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
