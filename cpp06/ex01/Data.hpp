#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

struct Data
{
    int log;
    std::string name;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);


Data *init_data(Data* tmp);

#endif