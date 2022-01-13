#include "phonebook.hpp"

void    contact::add()
{
    std::string name;

    std::cout << "INPUT FIRST_NAME -> ";
    std::getline(std::cin, name);
    this->first_name = name;
    std::cout << "INPUT LAST_NAME -> ";
    std::getline(std::cin, name);
    this->last_name = name;
    std::cout << "INPUT NICKNAME -> ";
    std::getline(std::cin, name);
    this->nickname = name;
    std::cout << "INPUT PHONENUNBER -> ";
    std::getline(std::cin, name);
    this->phone_number = name;
    std::cout << "INPUT DARKEST_SECRET -> ";
    std::getline(std::cin, name);
    this->darkest_secret = name;
}

std::string contact::add_spot(std::string str)
{
    if (str.length() >= 10)
        str = str.substr(0, 9).append(".");
    return (str);
}

void    contact::print_all()
{
    std::cout << std::right << std::setw(10) << add_spot(first_name) << "|";
    std::cout << std::right << std::setw(10) << add_spot(last_name) << "|";
    std::cout << std::right << std::setw(10) << add_spot(nickname) << "|" << std::endl;
}

void   contact::print_info()
{
    std::cout << "FIRST NAME : ";
    std::cout << this->first_name << std::endl;
    std::cout << "LAST NAME : ";
    std::cout << this->last_name << std::endl;
    std::cout << "NICKNAME : ";
    std::cout << this->nickname << std::endl;
    std::cout << "INPUT PHONENUNBER : ";
    std::cout << this->phone_number << std::endl;
    std::cout << "DARKEST SECRET : ";
    std::cout << this->darkest_secret << std::endl;
}

void    reserch(contact number[8])
{
    int name;

    for (int i=0; i < 8; i++)
    {
        std::cout << std::right << std::setw(10) << i + 1 << "|";
        number[i].print_all();
    }
    std::cout << "INPUT INDEX -> ";
    std::cin >> name;
    if (name <= 0 || name >= 9)
        std::cout << "YOUR INPUT IS WRONG" << std::endl;
    else
        number[name - 1].print_info();
    std::cin.clear();
    std::cin.ignore(100, '\n');
}

int main()
{
    std::string command;
    contact number[8];
    int     i;
    int     j;
    
    for (i=0; i < 8; i++)
        number[i] = contact();
    j = 0;
    std::cout << "you should accept the ADD command, the SEARCH command or the EXIT command." << std::endl;
    std::cout << "Any other input is discarded." << std::endl;
    while (true)
    {
        std::cout << "PHONE BOOK -> ";
        std::getline(std::cin, command);
        if (command == "EXIT")
            return (0);
        else if (command == "ADD")
        {
            if(j < 8)
                i = j;
            else
                i = j % 8;
            number[i].add();
            j++;
        }
        else if (command == "RESERCH")
            reserch(number);
    }
}
