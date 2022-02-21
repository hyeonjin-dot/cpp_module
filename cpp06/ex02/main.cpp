#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int i;
    i = rand() % 3;
    switch (i)
    {
    case 0:
        return (new A);
    case 1:
        return (new B);
    case 2:
        return (new C);
    default :
        return 0;
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "NULL" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A   &ref_a = dynamic_cast<A &>(p);
		(void)ref_a;
		std::cout << "A" << std::endl;
        return ;
    }
    catch(std::bad_cast n)
    {
    }
    try
    {
        B	&ref_b = dynamic_cast<B &>(p);
		(void)ref_b;
		std::cout << "B" << std::endl;
        return ;
    }
    catch(std::bad_cast n)
    {
    }
    try
    {
        C	&ref_c = dynamic_cast<C &>(p);
		(void)ref_c;
		std::cout << "C" << std::endl;
        return ;
    }
    catch(std::bad_cast n)
    {
    }
}

int main()
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < 10; i++)
    {
        std::cout << i + 1 << std::endl;
        Base *a = generate();
        identify(a);
        identify(*a);
        std::cout << std::endl;
    }
    return (0);
}