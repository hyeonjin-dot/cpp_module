#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 value;
    const static int    bit;
public:
    Fixed();
    Fixed(const Fixed &tmp);
    ~Fixed();
    Fixed &	operator=(Fixed const &tmp);
		
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};




#endif