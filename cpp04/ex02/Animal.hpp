#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal//virtual function
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &tmp);
    virtual ~Animal();

    Animal &    operator=(Animal const &tmp);

    std::string const &getType() const;
    virtual void    makeSound() const = 0;//
};

#endif