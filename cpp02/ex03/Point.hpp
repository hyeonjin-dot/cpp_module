#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(Fixed const &x, Fixed const &y);
    ~Point();

    Fixed const &getx() const;
    Fixed const &gety() const; 
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif