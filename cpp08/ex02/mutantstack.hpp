#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    MutantStack(const MutantStack<T> &tmp);
    virtual ~MutantStack();

    MutantStack<T> &operator=(const MutantStack<T> &tmp);

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator    begin();
    iterator    end();
};

#endif