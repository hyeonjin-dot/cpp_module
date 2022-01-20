#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 value;
    const static int    bit;
public:
    Fixed();
    Fixed(const Fixed &tmp);
    Fixed(const int fixed);
	Fixed(const float fixed);
    ~Fixed();
    Fixed &	operator=(Fixed const &tmp);
		
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);//


#endif