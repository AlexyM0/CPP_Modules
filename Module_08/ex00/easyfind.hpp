#pragma once

#include <iostream>
#include <string>
#include <vector>

template<typename T>
T easyfind(T const std::list& lst, int val2)
{
    for (size_t i = 0; i < lst.size(), i++)
    {
        if (lst[i] == val2)
            return (<T>std::cout << "The first occurence of" << val2 << "has been found at the element numero" << i << std::end;);
    }

}
