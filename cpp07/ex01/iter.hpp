#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *lst, unsigned int len, void (*f)(T &))
{
	for (unsigned int i = 0; i < len; i++)
		f(lst[i]);
}

#endif