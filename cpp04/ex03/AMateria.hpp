#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class   ICharacter;

class AMateria
{
protected:
    std::string type;
    unsigned int xp;
public:
    virtual ~AMateria();
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria & tmp);

    std::string const & getType() const; //Returns the materia type

    AMateria &operator=(const AMateria & other);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif