#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <climits>
#include <vector>
#include <deque>
#include <ctime>
#include <iomanip>

class PmergeMe
{

    public :

        PmergeMe(char **av, int ac);
        ~PmergeMe();

        void mainFunc();
        void checkArgs();
        void insertArgs();
        void printVec();
        void sortVector(std::vector<int>& vec);
        
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
        std::vector<int> vec_list;
        std::deque<int> deque_list;
};