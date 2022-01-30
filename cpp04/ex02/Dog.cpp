#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
    this->brain = new Brain();
}

Dog::Dog(std::string name):Animal(name)
{
}

Dog::Dog(const Dog &tmp):Animal(tmp)
{
    this->brain = new Brain(*tmp.getBrain());
}

Dog::~Dog()
{
    delete brain;
}

Dog &	Dog::operator=(Dog const &tmp)
{
    this->~Dog();
    this->Animal::operator=(tmp);
    this->brain = new Brain(*tmp.getBrain());
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Bark Bark!" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (this->brain);
}