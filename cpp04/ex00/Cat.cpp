#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
}

Cat::Cat(std::string name):Animal(name)
{
}

Cat::Cat(const Cat &tmp):Animal(tmp)
{
}

Cat::~Cat()
{
}

Cat &	Cat::operator=(Cat const &tmp)
{
    this->Animal::operator=(tmp);
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}