#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "Nonamed";
}

AMateria::AMateria(std::string const & tmp)
{
    type = tmp;
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
    
}

std::string const &AMateria::getType() const
{
    return ((*this).type);
}