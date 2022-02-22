#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>(){};
    MutantStack(const MutantStack<T> &tmp): std::stack<T>(tmp){};
    virtual ~MutantStack(){};

    MutantStack<T> &operator=(const MutantStack<T> &tmp)
    {
        std::stack<T>::operator=(tmp);
        return (*this);
    };

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator re_iterator;
    iterator    begin(){return this->c.begin();};//deque container (protected member)
    iterator    end(){return this->c.end();};//
    re_iterator    rbegin(){return this->c.rbegin();};//
    re_iterator    rend(){return this->c.rend();};//
};

#endif