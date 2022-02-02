#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure::Cure(const Cure &tmp):AMateria(tmp)
{
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &tmp)
{
    this->AMateria::operator=(tmp);
    return (*this);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}