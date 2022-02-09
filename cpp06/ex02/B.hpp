#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base
{
private:
public:
    B();
    B(const B &tmp);
    virtual ~B();

    B &operator=(const B &tmp);
};

#endif