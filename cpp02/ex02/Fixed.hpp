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

    Fixed	operator+(Fixed const & src) const;
    Fixed	operator-(Fixed const & src) const;
    Fixed	operator*(Fixed const & src) const;
    Fixed	operator/(Fixed const & src) const;

    bool    operator>(Fixed const & src) const;
    bool    operator<(Fixed const & src) const;
    bool    operator>=(Fixed const & src) const;
    bool    operator<=(Fixed const & src) const;
    bool    operator==(Fixed const & src) const;
    bool    operator!=(Fixed const & src) const;

    static Fixed   &max(Fixed &a, Fixed &b);//??
    static Fixed const &max(Fixed const &a, Fixed const &b);//??
    static Fixed   &min(Fixed &a, Fixed &b);//??
    static Fixed const &min(Fixed const &a, Fixed const &b);//??

    Fixed	operator++(int);
    Fixed	operator++(void);
    Fixed	operator--(int);
    Fixed	operator--(void);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);//

#endif