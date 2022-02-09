#include "B.hpp"

B::B()
{
}

B::B(const B &tmp)
{
    (void)tmp;
}

B::~B()
{
}

B &B::operator=(const B &tmp)
{
    (void)tmp;
    return (*this);
}