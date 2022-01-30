#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(std::string name);
    Dog(const Dog &tmp);
    ~Dog();

    Dog & operator=(const Dog &tmp);
    void    makeSound() const;//
    Brain *getBrain() const;
};

#endif