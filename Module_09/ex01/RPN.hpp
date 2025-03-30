#pragma once

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <stdexcept>
#include <cctype>

class RPN
{
    public :

        RPN(std::string av);
        RPN(RPN const & src);
        RPN &     operator=(RPN const & rhs);
        ~RPN();

        void mainFunc();
        void checkSynthax(std::string av);
        void calcul(std::string av);
        bool isNumber(const std::string& s);
        bool isOperator(const std::string& s);
        class Error: public std::exception
		{
			public:
				virtual const char* what() const throw();
        };
        private :
        
            RPN();

            std::string _av;
            std::stack<int> _stack;

};