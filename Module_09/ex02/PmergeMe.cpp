#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(char **av, int ac)
{
    _av = av;
    _ac = ac;
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    (void) src;
    return *this;
}

void PmergeMe::mainFunc()
{
    try
    {
        checkArgs();
        insertArgs();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

void PmergeMe::checkArgs()
{
    for(int i = 1; _av[i]; i++)
	{
		for(int j = 0; _av[i][j] ; j++)
        {
            if (std::isdigit(_av[i][j]) == false)
				throw Error();
            if (_av[i][0] == '0')
                throw Error();
        }
    
	}

}

void PmergeMe::insertArgs()
{
    std::vector<unsigned int>::iterator it;
    unsigned int temp;

    for (int i = 1; i < _ac; ++i)
    {
        temp = static_cast<unsigned int>(std::strtoul(_av[i], NULL, 10));
		if (temp > 2147483647)
			throw Error();
        for (it = vec_list.begin(); it != vec_list.end(); ++it)
        {
            if (*it == temp)
                throw Error();
        }
		vec_list.push_back(temp);
    }
}


PmergeMe::~PmergeMe()
{

}

const char *PmergeMe::Error::what() const throw()
{
	return ("Error");
}
