#include "Brain.hpp"

Brain::Brain()
{
    const std::string tmp[11] = {"A","B","C","D","E","F","G","H","I","J","K"};
    for(int i =0; i < 100 ; i++)
        this->ideas[i] = tmp[rand() % 11];
    std::cout << "Brain is created" << std::endl;
}

Brain::Brain(Brain const &tmp)
{
    for(int i =0; i < 100 ; i++)
        this->ideas[i] = tmp.oneidea(i);
}

Brain &Brain::operator=(Brain const &tmp)
{
    for(int i =0; i < 100 ; i++)
        this->ideas[i] = tmp.oneidea(i);
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain is disappeared" << std::endl;
}

std::string const &Brain::oneidea(int i) const
{
    return (this->ideas[i]);
}