#include "Bureaucrat.hpp"

int main()
{
    std::string tmp = "one";
    std::string tmp2 = "two";
    try
    {
      //Bureaucrat   i(tmp, 222);
      Bureaucrat   j(tmp2, 22);
      std::cout << j << std::endl;
      j.DecreaseGrade(20);
      std::cout << j << std::endl;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    

    //i.DecreaseGrade(120);
    //j.IncreaseGrade(1);
    return 0;
}