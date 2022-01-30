#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
}

WrongCat::WrongCat(std::string name):WrongAnimal(name)
{
}

WrongCat::WrongCat(const WrongCat &tmp):WrongAnimal(tmp)
{
}

WrongCat::~WrongCat()
{
}

WrongCat &	WrongCat::operator=(WrongCat const &tmp)
{
    this->WrongAnimal::operator=(tmp);
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "Woem Woem!" << std::endl;
}