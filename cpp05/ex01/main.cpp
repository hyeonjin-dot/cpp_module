#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::string tmp = "one";
    std::string tmp2 = "two";
    std::string tmp3 = "three";
    std::string tmp4 = "four";
    try
    {
      //Bureaucrat   i(tmp, 222);
      Bureaucrat   j(tmp2, 22);
      std::cout << j << std::endl;
      j.DecreaseGrade(20);
      std::cout << j << std::endl;
      std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    
    try
    {
      Bureaucrat i(tmp, 10);
      Bureaucrat k(tmp3, 15);
      Form  j(tmp2, 11, 11);
      Form  t(tmp4, 3, 3);
      j.beSigned(i);
      std::cout << j << std::endl;
      t.beSigned(k);
      std::cout << k << std::endl;
    }
    catch(const std::exception& e)
    {
      std::cerr << e.what() << '\n';
    }
    
    return 0;
}