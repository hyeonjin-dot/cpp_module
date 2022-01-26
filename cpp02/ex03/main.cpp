#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(10), Fixed(0));
    Point c(Fixed(10), Fixed(10));
    Point d(Fixed(3), Fixed(0));//

    bool ret = bsp(a, b, c, d);
    std::cout << ret << std::endl;
}