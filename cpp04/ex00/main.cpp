#include <iostream>
#include "Dog.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << " " << std::endl;
    const WrongAnimal* wrng = new WrongAnimal();
    const WrongAnimal* k = new WrongCat();
    std::cout << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << " " << std::endl;
    wrng->makeSound();
    k->makeSound();
    std::cout << " " << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrng;
    delete k;
}