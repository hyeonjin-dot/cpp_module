#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();
    Cure(const Cure &tmp);
    ~Cure();

    Cure &operator=(const Cure &other);
    void use(ICharacter& target);
    AMateria* clone() const;
};



#endif