#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        RPN rpn(av[1]);
        rpn.mainFunc();
    }
    else
        std::cerr << "Wrong number of args" << std::endl;
}