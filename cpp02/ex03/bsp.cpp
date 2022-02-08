
#include "Point.hpp"
#include "Fixed.hpp"

float   check(Point a, Point b, Point c)//직선방정식 
{
    return ((c.getx().toFloat()-a.getx().toFloat()) * (a.gety().toFloat() - b.gety().toFloat()) \
    - (c.gety().toFloat()-a.gety().toFloat()) * (a.getx().toFloat() - b.getx().toFloat()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) //abc삼각형 안에 point 점이 있는가?
{
    float x1 = check(a, b, point);
    float y1 = check(a, c, point);
    float z1 = check(b, c, point);
    float x2 = check(a, b, c);
    float y2 = check(a, c, b);
    float z2 = check(b, c, a);

    if (x1 * x2 < 0)
        return (false);
    if (y1 * y2 < 0)
        return (false);
    if (z1 * z2 < 0)
        return (false);
    else
        return (true);
}