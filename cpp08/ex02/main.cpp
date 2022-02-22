#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top : " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size : " << mstack.size() << std::endl;

    mstack.push(3); 
    mstack.push(10); 
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin(); 
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    std::cout << "------<print>------" << std::endl;
    while (it != ite) 
    {
        std::cout << *it << std::endl;
        ++it;
    }

    MutantStack<int>::re_iterator rit = mstack.rbegin(); 
    MutantStack<int>::re_iterator rite = mstack.rend();

    std::cout << "------<print>------" << std::endl;
    while (rit != rite) 
    {
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::stack<int> s(mstack);

    return 0;
}