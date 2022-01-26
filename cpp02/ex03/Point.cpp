#include "Point.hpp"

Point::Point():x(0), y(0)
{
}

Point::Point(Fixed const &x, Fixed const &y):x(x), y(y)
{
}

Point::~Point()
{
}

Fixed   const &Point::getx() const
{
    return (this->x);
}

Fixed   const &Point::gety() const
{
    return (this->y);
}