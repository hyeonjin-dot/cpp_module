#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
private:
public:
    Base();
    Base(const Base &tmp);
    virtual ~Base();

    Base &operator=(const Base &tmp);
};

#endif
