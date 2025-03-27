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

        typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

        typename std::deque<T>::iterator begin();
		typename std::deque<T>::iterator end();
		const typename std::deque<T>::const_iterator cbegin() const;
		const typename std::deque<T>::const_iterator cend() const;
		typename std::deque<T>::reverse_iterator rbegin();
		typename std::deque<T>::reverse_iterator rend();
		const typename std::deque<T>::const_reverse_iterator rcbegin() const;
		const typename std::deque<T>::const_reverse_iterator rcend() const;

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

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

template <typename T>
const typename std::deque<T>::const_iterator MutantStack<T>::cbegin() const
{
	return this->c.cbegin();
}

template <typename T>
const typename std::deque<T>::const_iterator MutantStack<T>::cend() const
{
	return this->c.cend();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template <typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rend()
{
	return this->c.rend();
}

template <typename T>
const typename std::deque<T>::const_reverse_iterator MutantStack<T>::rcbegin() const
{
	return this->c.crbegin();
}

template <typename T>
inline const typename std::deque<T>::const_reverse_iterator MutantStack<T>::rcend() const
{
	return this->c.crend();
}
