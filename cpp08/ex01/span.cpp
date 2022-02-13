#include "span.hpp"

Span::Span() : n(0)
{
}

Span::Span(unsigned int n) : n(n)
{
}

Span::Span(const Span &tmp) : n(tmp.n), v(tmp.v)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &tmp)
{
    if (this == &tmp)
        return *this;
    n = tmp.n;
    v = tmp.v;
    return *this;
}


void    Span::addNumber(unsigned int n)
{
    if (v.size() == n)
        throw SizeError();
    v.push_back(n);

}

void    Span::addNumber(std::vector<int>::iterator &s, std::vector<int>::iterator &e)
{
    std::vector<int>::iterator iter = s;
    
    while (iter != e)
    {
        if (v.size() == n)
            throw SizeError();
        v.push_back(*iter);
        *iter++;
    }
}

unsigned int Span::shortestSpan()
{
    if (v.size() < 2)
        throw CannotCompare();
    
    std::vector<int> tmp = v;
    std::sort(tmp.begin(), tmp.end());
    
    std::vector<int>::iterator iter1 = tmp.begin();
    std::vector<int>::iterator iter2 = ++tmp.begin();
    std::vector<int>::iterator iter3 = iter1;
    unsigned int min = (iter2 - iter1);

    while (iter1 != --tmp.end())
    {
        iter3 = iter1;
        iter2 = ++iter1;
        iter1 = iter3;
        while (iter2 != tmp.end())
        {
            if (min > (iter2 - iter1))
                min = (iter2 - iter1);
            ++iter2;
        }
        ++iter1;
    }
    return min;
}

unsigned int Span::longestSpan()
{
    if (v.size() < 2)
        throw CannotCompare();
    
    std::vector<int> tmp = v;
    std::sort(tmp.begin(), tmp.end());

    return (tmp.back() - tmp.front());
}