#pragma once

#include "iostream"
#include <bits/stdc++.h>

class Span
{
    public:
        Span(unsigned int);
        Span(Span const & src);
        Span &     operator=(Span const & rhs);
        ~Span();
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
        size_t getSize() const;
        void displayContainer () const;
        class TabIsFull : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
        class CantFindDistance : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

    private:
        unsigned int _size;
        std::vector<int>	_tab;
        Span();


};