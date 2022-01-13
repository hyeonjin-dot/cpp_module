#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "string" << std::endl;
    std::cout << "string str : " << str << std::endl;
    std::cout << "stringPTR  : " << *stringPTR << std::endl;
    std::cout << "stringREF  : " << stringREF << std::endl;

    std::cout << "address of string" << std::endl;
    std::cout << "string str address : " << &str << std::endl;
    std::cout << "stringPTR address  : " << stringPTR << std::endl;
    std::cout << "stringREF address  : " << &stringREF << std::endl;


}