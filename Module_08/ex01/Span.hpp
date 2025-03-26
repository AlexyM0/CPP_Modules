#pragma once

#include "iostream"
#include <bits/stdc++.h>
#include <iterator>
#include <vector>

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

        template <typename Iterator>
        void addNumber2(Iterator begin, Iterator end)
        {
            size_t count = std::distance(begin, end);
            if (getSize() + count > _size)
                throw TabIsFull();

            _tab.insert(_tab.end(), begin, end);
        }   

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