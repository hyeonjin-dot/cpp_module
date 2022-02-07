#include "Scalar.hpp"

int main(int argv, char *argc[])
{
    if (argv != 2)
    {
        std::cout << "Wrong input" << std::endl;
        return (1);
    }
    std::string tmp = argc[1];
    Scalar scalar(tmp);
    std::cout << scalar;
    return (0); 
}