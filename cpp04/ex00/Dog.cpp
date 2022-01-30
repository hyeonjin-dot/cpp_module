#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
}

Dog::Dog(std::string name):Animal(name)
{
}

Dog::Dog(const Dog &tmp):Animal(tmp)
{
}

Dog::~Dog()
{
}

Dog &	Dog::operator=(Dog const &tmp)
{
    this->Animal::operator=(tmp);
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Bark Bark!" << std::endl;
}