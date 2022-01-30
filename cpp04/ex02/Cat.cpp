#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
    this->brain = new Brain();
}

Cat::Cat(std::string name):Animal(name)
{
}

Cat::Cat(const Cat &tmp):Animal(tmp)
{
    this->brain = new Brain(*tmp.getBrain());
}

Cat::~Cat()
{
    delete brain;
}

Cat &	Cat::operator=(Cat const &tmp)
{
    this->~Cat();
    this->Animal::operator=(tmp);
    this->brain = new Brain(*tmp.getBrain());
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (this->brain);
}