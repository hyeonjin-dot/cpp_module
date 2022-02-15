#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "Nonamed";
    xp = 20;
}

AMateria::AMateria(std::string const & tmp)
{
    type = tmp;
    xp = 20;
}

AMateria::AMateria(const AMateria &tmp)
{
    *this = tmp;
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(const AMateria &other)
{
    return (*this);
}

void    AMateria::use(ICharacter & target)
{
    (void)target;
    this->xp += 10;
}

std::string const &AMateria::getType() const
{
    return ((*this).type);
}