#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain &tmp);
    ~Brain();

    Brain &operator=(Brain const &other);
    std::string const &oneidea(int i) const;
};

#endif