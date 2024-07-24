#include "ScalarConverter.hpp"

int main(int ac, char **av)
{

    if (ac != 2)
    {
        std::cout << "Wrong number of args" << std::endl;
        return (0);
    }
    
    try
    {
        ScalarConverter::convert(av[1]);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
  
    
}
