#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;//
        Array<int> test(tmp);//
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "------------------" << std::endl;

    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << numbers[i];
        numbers[i] = rand();
        std::cout << " -> " << numbers[i] << std::endl;
    }
    delete [] mirror;//

    std::cout <<  "------------------" << std::endl;

    Array<std::string> lst(2);
    
    lst[0] = "hi";
    lst[1] = "hello";

    for (int i = 0; i < 2 ; i++)
        std::cout << lst[i] << std::endl;

    std::cout <<  "------------------" << std::endl;

    Array<std::string> copy(lst);

    for (int i = 0; i < 2 ; i++)
        std::cout << copy[i] << std::endl;

    return 0;
}