#include "iter.hpp"
#include <iostream>

template <typename T>
void  print(T &a)
{
  std::cout << a << " ";
}

int main( void ) 
{
  std::cout << "---------------" << std::endl;
  int  i[5] = { 1, 2, 3, 4, 5 };
  iter(i, 5, print);
  std::cout << std::endl;

  std::cout << "---------------" << std::endl;
  std::string j[6] = {"hi", "hello", "nice", "to", "meet", "you"};
  iter(j, 6, print);
  std::cout << std::endl;

  std::cout << "---------------" << std::endl;
  float k[3] = {3.0f, 2.2f, 9.1f};
  iter(k, 3, print);
  std::cout << std::endl;
  
  std::cout << "---------------" << std::endl;
  double tmp[4] = {3.01, 2.26, 9.18, 7.454};
  iter(tmp, 4, print);
  std::cout << std::endl;
}