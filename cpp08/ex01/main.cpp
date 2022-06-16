#include "span.hpp"

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(1);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "-----------------" << std::endl;

    Span sp1 = Span(3);
    try
    {
        sp1.addNumber(17);
        sp1.addNumber(9);
        sp1.addNumber(11);
        sp1.addNumber(3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

    std::cout << "-----------------" << std::endl;

    std::vector<int> vec;

	for (int i = 0; i < 1000; i++)
	{
		vec.push_back(i);
	}

	std::vector<int>::iterator iter2 = begin(vec);
    std::vector<int>::iterator iter3 = end(vec);

    Span sp2 = Span(1000);
    sp2.addNumber(iter2, iter3);

    std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}