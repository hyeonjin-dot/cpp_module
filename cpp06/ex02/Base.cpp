#include "Base.hpp"

Base::Base(){}

Base::Base(const Base &tmp)
{
    (void)tmp;
}

Base::~Base(){}

Base &Base::operator=(const Base &tmp)
{
    (void)tmp;
    return (*this);
}