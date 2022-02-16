#include "Serialization.hpp"

int main()
{
    Data data;

    data.name = "hj";
    data.log = 10;


    std::cout << data.name << std::endl;
    std::cout << data.log << std::endl;

    std::cout << "-----------" << std::endl;
    uintptr_t raw = serialize(&data);

    Data *two = deserialize(raw);

    std::cout << two->name << std::endl;
    std::cout << two->log << std::endl;

}