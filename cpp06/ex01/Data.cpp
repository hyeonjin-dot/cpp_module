#include "Data.hpp"

Data*    init_data(Data* tmp)
{
    tmp->log = 0;
    tmp->name = "nonamed";
    return (tmp);
}

uintptr_t serialize(Data* ptr)
{
    uintptr_t *a;

    *a = (uintptr_t)&(ptr->log);
    return (a);
}

Data* deserialize(uintptr_t raw)
{
    int a;

    &a = *raw;
    return (a);
}