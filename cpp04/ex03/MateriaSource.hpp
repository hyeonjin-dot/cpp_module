#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
private:
    std::string name;
    AMateria*   inv[4];
    int         total;
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    virtual ~MateriaSource();

    MateriaSource &operator=(const MateriaSource &tmp);
    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};


#endif