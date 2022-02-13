#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

class Cannotfind : public std::exception
{
public:
	const char *what() const throw()
	{
		return "Can't find";
	}
};

template <typename T>
int &easyfind(T &a, int num)
{
    typename T::iterator iter = std::find(a.begin(), a.end(), num);
    if (iter == a.end())
        throw Cannotfind();
    return *iter;
}

#endif