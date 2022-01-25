#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
    int x;
    int y;
public:
    Point();
    ~Point();
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif