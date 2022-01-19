#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
public:
    Karen();
    ~Karen();
    void    complain(std::string level);
private:
    void    debug();
    void    info();
    void    warning();
    void    error();
};

typedef struct	s_find {
	std::string	str;
	void	(Karen::*f)();
}				t_find;

#endif