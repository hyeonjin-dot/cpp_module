#include <iostream>
#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen   tmp;

    if (argc != 2)
    {
        std::cout << "input something" << std::endl;
        return (0);
    }
    tmp.complain(argv[1]);
}