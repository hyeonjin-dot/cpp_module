#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << type << std::endl;
}

WrongCat::WrongCat(std::string name)
{
    type = name;
    std::cout << type << std::endl;
}

WrongCat::WrongCat(const WrongCat &tmp)
{
    *this = tmp;
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