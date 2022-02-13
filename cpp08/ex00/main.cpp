#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	std::vector<int>::iterator iter = begin(vec);

	while (iter != end(vec))
	{
		std::cout << *iter++ << " "; 
	}
	std::cout << std::endl;

	try
	{
		easyfind(vec, 4);
		std::cout << "easy find!" << std::endl;
		easyfind(vec, 8);
		std::cout << "easy find!" << std::endl;
		easyfind(vec, 12);
		std::cout << "easy find!" << std::endl;
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}