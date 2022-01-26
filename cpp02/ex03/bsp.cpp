
#include "Point.hpp"
#include "Fixed.hpp"

float   check(Point a, Point b, Point c)//직선방정식 
{
    return ((c.getx().toFloat()-a.getx().toFloat()) * (a.gety().toFloat() - b.gety().toFloat()) \
    - (c.gety().toFloat()-a.gety().toFloat()) * (a.getx().toFloat() - b.getx().toFloat()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) //abc삼각형 안에 point 점이 있는가?
{
    float x = check(a, b, point);
    float y = check(a, c, point);
    float z = check(b, c, point);

    if (x * y < 0 || x * z < 0 || y * z < 0)
        return (false);
    else if (x > 0 && y > 0 && z > 0)
        return (true);
    else if (x < 0 && y < 0 && z < 0)
        return (true);
    else
        return (false);
}