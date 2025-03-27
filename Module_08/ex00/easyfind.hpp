#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

class NotValide : public std::exception
{
    public:
		virtual const char* what() const throw();
};



const char* ::NotValide::what() const throw()
{
	return ("la valeur n'a pas été trouvée dans le container");
}

template<typename T>
typename T::iterator easyfind(T &container, int val2)
{
    typename T::iterator it  = std::find(container.begin(), container.end(), val2);
    if (it != container.end())
	    return it;
    else
        throw ::NotValide();
}
