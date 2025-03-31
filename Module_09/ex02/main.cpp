#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac > 2)
    {
        PmergeMe merge(av, ac);
        merge.mainFunc();
    }
    else
        std::cerr << "Wrong number of args" << std::endl;
    return 0;
}