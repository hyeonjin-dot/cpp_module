#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
private:
    /* data */
public:
    Dog();
    Dog(std::string name);
    Dog(const Dog &tmp);
    ~Dog();

    Dog & operator=(const Dog &tmp);
    void    makeSound() const;//
};

#endif