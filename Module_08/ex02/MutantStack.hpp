#pragma once

#include <string>
#include <iostream>
#include <bits/stdc++.h>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(MutantStack const & src);
        MutantStack & operator=(MutantStack const & rhs);
        ~MutantStack();

    private:

};

template<typename T>
MutantStack<T>::MutantStack()
{

}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
	*this = src;
}
template<typename T>
MutantStack<T>::~MutantStack()
{

}

template<typename T>
MutantStack<T> &     MutantStack<T>::operator=(MutantStack const & rhs)
{
	if(this != &rhs)
	{
		this->c = rhs.c;
	}
	return *this;
}