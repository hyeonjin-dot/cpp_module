#include "Bureaucrat.hpp"

int main()
{
    std::string tmp2 = "one";
    try
    {
      Bureaucrat   j(tmp2, 22);
      std::cout << j << std::endl;
      j.DecreaseGrade(20);
      std::cout << j << std::endl;
      j.IncreaseGrade(10);
      std::cout << j << std::endl;
      j.IncreaseGrade(40);
      std::cout << j << std::endl;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    tmp2 = "two";
    try
    {
      Bureaucrat   j(tmp2, 22);
      std::cout << j << std::endl;
      j.DecreaseGrade(130);
      std::cout << j << std::endl;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }

    return 0;
}