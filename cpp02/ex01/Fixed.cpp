#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(Fixed const &tmp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = tmp;//operator로 이동 연산자오버로딩 
}

Fixed::Fixed(const int fixed)
{
    std::cout << "Int constructor called" << std::endl;
    value = fixed << bit;

}

Fixed::Fixed(const float fixed)
{
    std::cout << "Float constructor called" << std::endl;
    value = roundf(fixed * (1 << bit));
}

Fixed::~Fixed()
{
    std::cout << "Destrutor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const &tmp)
{
    std::cout << "Assignation operation called" << std::endl;
    value = tmp.getRawBits();
    return (*this);
}

int		Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

float   Fixed::toFloat( void ) const
{
    return (float(value) / (1 << bit));
}

int     Fixed::toInt( void ) const
{
    return (value >> bit);
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)//?
{
	out << value.toFloat();
	return (out);
}
