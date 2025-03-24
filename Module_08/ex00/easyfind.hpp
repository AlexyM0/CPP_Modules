#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
template<typename T>
typename T::iterator easyfind(T &container, int val2)
{
    typename T::iterator it  = std::find(container.begin(), container.end(), val2);
	return it;
}
