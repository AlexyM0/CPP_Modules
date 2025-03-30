#pragma once

#include <iostream>

class RPN
{
    public :

        RPN(std::string av);
        RPN(RPN const & src);
        RPN &     operator=(RPN const & rhs);
        ~RPN();
        void mainFunc();
        void checkSynthax(std::string av);
        class Error: public std::exception
		{
			public:
				virtual const char* what() const throw();
        };
        private :
        
            RPN();

            std::string _av;

};