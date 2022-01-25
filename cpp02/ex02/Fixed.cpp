#include "Fixed.hpp"

const int Fixed::bit = 8;

Fixed::Fixed()
{
    //std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(Fixed const &tmp)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = tmp;//operator로 이동 연산자오버로딩 
}

Fixed::Fixed(const int fixed)
{
    //std::cout << "Int constructor called" << std::endl;
    value = fixed << bit;

}

Fixed::Fixed(const float fixed)
{
    //std::cout << "Float constructor called" << std::endl;
    value = roundf(fixed * (1 << bit));
}

Fixed::~Fixed()
{
    //std::cout << "Destrutor called" << std::endl;
}

Fixed &	Fixed::operator=(Fixed const &tmp)
{
    //std::cout << "Assignation operation called" << std::endl;
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

/*
기존 내용 ⬆️
*/

Fixed	Fixed::operator+(Fixed const & src) const
{
	return (Fixed(this->toFloat() + src.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & src) const
{
	return (Fixed(this->toFloat() - src.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & src) const
{
	return (Fixed(this->toFloat() * src.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & src) const
{
	return (Fixed(this->toFloat() / src.toFloat()));
}

bool	Fixed::operator>(Fixed const & src) const
{
	return ((this->toFloat() > src.toFloat()));
}

bool	Fixed::operator<(Fixed const & src) const
{
	return ((this->toFloat() < src.toFloat()));
}

bool	Fixed::operator<=(Fixed const & src) const
{
	return ((this->toFloat() <= src.toFloat()));
}

bool	Fixed::operator>=(Fixed const & src) const
{
	return ((this->toFloat() >= src.toFloat()));
}

bool	Fixed::operator==(Fixed const & src) const
{
	return ((this->toFloat() == src.toFloat()));
}

bool	Fixed::operator!=(Fixed const & src) const
{
	return ((this->toFloat() != src.toFloat()));
}

/*Fixed   & Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return (a);
    return (b);
}*/

Fixed   Fixed::operator++(int)//a++
{
    Fixed f(*this);
    f.value++;
    return (f);
}

Fixed   Fixed::operator++()//++a
{
    Fixed f(*this);
    f.value++;
    return (f);
}


/*
++, --
min 함수 : 두 개의 고정 소수점 값에 대한 참조를 가져와 가장 작은 값에 대한 참조를 반환하는 정적 멤버 함수
위 min 함수를 오버로드하여 가장 작은 상수 값에 대한 참조를 반환하는 min 함수
max 함수 : 두 개의 고정 소수점 값에 대한 참조를 가져와 가장 큰 값에 대한 참조를 반환하는 정적 멤버 함수
위 max 함수를 오버로드하여 가장 큰 상수 값에 대한 참조를 반환하는 min 함수
*/