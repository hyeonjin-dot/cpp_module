#include "Bureaucrat.hpp"
#include "Form.hpp"

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
    
    try
    {
      Bureaucrat i(tmp, 10);
      Form  j(tmp2, 11, 11);
      j.beSigned(i);
      std::cout << j << std::endl;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    
    return 0;
}