#include "Animal.hpp"

Animal::Animal()
{
    type = "animal";
    std::cout << type << std::endl;
}

Animal::Animal(std::string name)
{
    type = name;
    std::cout << type << std::endl;
}

Animal::Animal(const Animal &tmp)
{
    type = tmp.getType();
}

Animal::~Animal()
{
    std::cout << type << " destructor called" << std::endl;
}

std::string const &Animal::getType() const
{
    return (this->type);
}

Animal &	Animal::operator=(Animal const &tmp)
{
    this->type = tmp.getType();
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Animal Animal!" << std::endl;
}