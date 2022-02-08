#include "Data.hpp"

int main()
{
    Data *data;

    init_data(data);
    data->log = 10;
    std::cout << &(data->log) << std::endl;
    std::cout << std::hex << serialize(data) << std::endl;

}