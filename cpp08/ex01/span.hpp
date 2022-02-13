#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
private:
    unsigned int n;
    std::vector<int> v;
public:
    Span();
    Span(unsigned int n);
    Span(const Span &tmp);
    ~Span();

    Span &operator=(const Span &tmp);

    void    addNumber(unsigned int n);
    void    addNumber(std::vector<int>::iterator &s, std::vector<int>::iterator &e);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class SizeError : public std::exception
    {
    public:
	    const char *what() const throw()
	    {
		    return "Span is full";
	    }
    };
    class CannotCompare : public std::exception
    {
    public:
	    const char *what() const throw()
	    {
		    return "Can't compare";
	    }
    };
};




#endif