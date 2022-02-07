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
    *this = tmp;
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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
    this->value = raw;
}