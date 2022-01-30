#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "Wronganimal";
    std::cout << type << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
    type = name;
    std::cout << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &tmp)
{
    type = tmp.getType();
}

WrongAnimal::~WrongAnimal()
{
    std::cout << type << " destructor called" << std::endl;
}

std::string const &WrongAnimal::getType() const
{
    return (this->type);
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &tmp)
{
    this->type = tmp.getType();
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal WrongAnimal!" << std::endl;
}