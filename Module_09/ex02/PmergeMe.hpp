#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <vector>

class PmergeMe
{

    public :

        PmergeMe(char **av, int ac);
        void mainFunc();
        void checkArgs();
        void insertArgs();
        ~PmergeMe();

        class Error: public std::exception
		{
			public:
				virtual const char* what() const throw();
        };

    private :

        PmergeMe();
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=(const PmergeMe &src);

        char **_av;
        int _ac;
        std::vector<unsigned int> vec_list;
};