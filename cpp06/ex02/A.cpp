#include "A.hpp"

A::A()
{
}

A::A(const A &tmp)
{
    (void) tmp;
}

A::~A()
{
}

A &A::operator=(const A &tmp)
{
    (void)tmp;
    return *this;
}