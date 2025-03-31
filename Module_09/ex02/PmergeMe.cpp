#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(char **av, int ac)
{
    _av = av;
    _ac = ac;
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &src)
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

        std::cout << "Before: ";
        printVec();
        clock_t startVec = clock();
        sortVector(vec_list);
        clock_t endVec = clock();
        std::cout << "After: ";
        printVec();
        double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000;
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << vec_list.size() << " elements with std::vector : "<< timeVec << " µs" << std::endl;

        clock_t startDeq = clock();
        sortDeque(deque_list);
        clock_t endDeq = clock();
        double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;
        std::cout << std::fixed << std::setprecision(5);
        std::cout << "Time to process a range of " << vec_list.size() << " elements with std::deque : "<< timeDeq << " µs" << std::endl;
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
            if (i > 5000)
                throw Error();
        }
    
	}

}

void PmergeMe::insertArgs()
{
    std::vector<int>::iterator it;
    unsigned int temp;

    for (int i = 1; i < _ac; ++i)
    {
        temp = static_cast<unsigned int>(std::strtoul(_av[i], NULL, 10));
		if (temp > 2147483647)
			throw Error();
        for (it = vec_list.begin(); it != vec_list.end(); ++it)
        {
            if (static_cast<unsigned int>(*it) == temp)
                throw Error();
        }
		vec_list.push_back(temp);
    }
    deque_list.assign(vec_list.begin(), vec_list.end());
}

void PmergeMe::sortVector(std::vector<int>& vec) 
{
    std::vector<int> main_chain;
    std::vector<int> pending;

    if (vec.size() <= 1)
        return;
    
    for (size_t i = 0; i + 1 < vec.size(); i += 2) 
    {
        int a = vec[i];
        int b = vec[i + 1];
        if (a > b) 
        {
            main_chain.push_back(a);
            pending.push_back(b);
        }
        else 
        {
            main_chain.push_back(b);
            pending.push_back(a);
        }
    }

    if (vec.size() % 2 != 0)
        main_chain.push_back(vec.back());

    sortVector(main_chain);

    for (size_t i = 0; i < pending.size(); ++i) 
    {
        int to_insert = pending[i];
        std::vector<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), to_insert);
        main_chain.insert(it, to_insert);
    }
    vec = main_chain;
}

void PmergeMe::sortDeque(std::deque<int>& deq_list)
{
    if (deq_list.size() <= 1)
        return;

    std::deque<int> main_chain;
    std::deque<int> pending;

    for (size_t i = 0; i + 1 < deq_list.size(); i += 2)
    {
        int a = deq_list[i];
        int b = deq_list[i + 1];
        if (a > b) 
        {
            main_chain.push_back(a);
            pending.push_back(b);
        }
        else
        {
            main_chain.push_back(b);
            pending.push_back(a);
        }
    }

    if (deq_list.size() % 2 != 0)
        main_chain.push_back(deq_list.back());

    sortDeque(main_chain);

    for (size_t i = 0; i < pending.size(); ++i)
    {
        int to_insert = pending[i];
        std::deque<int>::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), to_insert);
        main_chain.insert(it, to_insert);
    }
    deq_list = main_chain;
}

PmergeMe::~PmergeMe()
{

}

void PmergeMe::printVec()
{
    std::vector<int>::iterator it;

    for (it = vec_list.begin(); it != vec_list.end(); ++it)
    {
        std::cout << *it << ' ';
    }
    std::cout << std::endl;
}

const char *PmergeMe::Error::what() const throw()
{
	return ("Error");
}
