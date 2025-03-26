#include "Span.hpp"

Span::Span()
{

}

Span::Span(unsigned int size)
{
    this->_size = size;
}

Span::Span(Span const & src)
{
    *this = src;
}

Span &     Span::operator=(Span const & rhs)
{
	if(this != &rhs)
	{
        _size = rhs._size;
		_tab = rhs._tab;
	}
	return *this;
}

Span::~Span()
{
    
}

void Span::addNumber(int nb)
{
    if (getSize() < this->_size)
        this->_tab.push_back(nb);
    else
        throw TabIsFull();
}

size_t Span::getSize() const 
{
    return this->_tab.size();
}

const char *Span::TabIsFull::what() const throw()
{
	return ("can't add number tab is full");
}

const char *Span::CantFindDistance::what() const throw()
{
	return ("can't find distance");
}

int Span::shortestSpan()
{
    if (getSize() < 2)
        throw CantFindDistance();
    int span = -1;
	int temp_res;
	std::sort(_tab.begin(), _tab.end());
	for(size_t i = 0, j = i + 1; j < _tab.size(); i++, j++)
	{
		temp_res = abs(_tab[i] - _tab[j]);
		if(temp_res < span || span == -1)
			span = temp_res;
	}
	return span;
}

int Span::longestSpan()
{
    if (getSize() < 2)
        throw CantFindDistance();
    int _max_value = *(std::max_element(_tab.begin(), _tab.end()));
    int _min_value = *(std::min_element(_tab.begin(), _tab.end()));
        return (_max_value - _min_value);
}

void Span::displayContainer() const
{
	for (size_t i = 0; i < _tab.size(); i++)
		std::cout << _tab[i] << "\n";
}

