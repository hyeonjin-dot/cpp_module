#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:
    /* data */
public:
    WrongCat();
    WrongCat(std::string name);
    WrongCat(const WrongCat &tmp);
    virtual ~WrongCat();

    WrongCat & operator=(const WrongCat &tmp);
    void    makeSound() const;//
};

#endif