#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice: public AMateria
{
private:
    /* data */
public:
    Ice();
    Ice(const Ice &tmp);
    ~Ice();

    Ice &operator=(const Ice& other);

    void use(ICharacter& target);
    AMateria* clone() const;
};

#endif