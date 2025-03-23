#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template<typename T, typename Func>
void iter(T *tab, int size, Func func)
{

	if (size < 0)
        return;
    if (tab == NULL || func == NULL)
		return ;
    for(int i = 0; i < size; i++)
        func(tab[i]);
}

#endif