#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
private:
    /* data */
public:
    Cat();
    Cat(std::string name);
    Cat(const Cat &tmp);
    ~Cat();

    Cat & operator=(const Cat &tmp);
    void    makeSound() const;//
};

#endif