#include "iter.hpp"

template< typename T >
void print( T const & x )
{
  std::cout << x << std::endl;
  return;
}

int main() 
{
	int tab[] = { 0, 1, 2, 3, 4 };
	std::string test[] = {"test", "ok", "ouioui"};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

	iter( tab, 5, print<const int>);
    std::cout << std::endl;

	iter( test, 3, print<const std::string>);
    std::cout << std::endl;

    iter( charArray, 5, print<const char>);
    return 0;
}