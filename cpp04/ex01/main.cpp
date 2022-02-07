#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Animal *tmp[10];
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            tmp[i] = new Dog();
        else
            tmp[i] = new Cat();
    }
    std::cout << "" << std::endl;

    Dog a(*(Dog *)tmp[0]);

    for (int i = 0; i < 100 ; i++)
    {
        std::cout << ((Dog *)tmp[0])->getBrain()->oneidea(i) << " ";
        std::cout << (a).getBrain()->oneidea(i) << " ";
        if (i >= 9 && (i + 1) % 10 == 0)
            std::cout << std::endl;
    }

    for (int i = 0; i < 10; i++)
        delete tmp[i];
}