#include "C.hpp"

C::C()
{
}

C::C(const C &tmp)
{
    (void) tmp;
}

C::~C()
{
}

C &C::operator=(const C &tmp)
{
    (void)tmp;
    return *this;
}