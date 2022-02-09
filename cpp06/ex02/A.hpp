#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A : public Base
{
private:
public:
    A();
    A(const A &tmp);
    virtual ~A();

    A &operator=(const A &tmp);
};

#endif