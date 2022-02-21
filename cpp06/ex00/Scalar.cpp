#include "Scalar.hpp"

Scalar::Scalar():input()
{
}

Scalar::Scalar(std::string &tmp): input(tmp)
{
}

Scalar::Scalar(const Scalar &tmp):input(tmp.input)
{
}

Scalar::~Scalar()
{
}

Scalar &Scalar::operator=(const Scalar &tmp)
{
    (std::string)input = (std::string)tmp.input;
    return (*this);
}

const char* Scalar::Impossible::what() const throw()
{
    return ("Impossible");
}

const char* Scalar::Nondisplay::what() const throw()
{
    return ("Non displayable");
}

std::string const &Scalar::returnValue() const
{
    return (input);
}

/*
	std::string	array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string *ptr = std::find(array, array + 4, level);
*/

char    Scalar::intoChar() const
{
    int n;
    const char* tmp;
    std::string	array[] = {"inf", "inff", "-inf", "-inff", "+inf", "+inff", "nan", "nanf"};

    try
    {
        tmp = (this->input).c_str();
        n = std::atoi(tmp);
        std::string *ptr = std::find(array, array + 8, this->input);
        int idx = ptr - array;
        if (idx < 8)
            throw Scalar::Impossible();
        if (n == 0 && idx == 8)            
            throw Scalar::Impossible();
    }
    catch(...)
    {
        throw Scalar::Impossible();
    }
    if (n < 32 || n > 126)
        throw Scalar::Nondisplay();
    return (static_cast<char>(n));
}

int Scalar::intoInt() const
{
    int n;
    const char* tmp;
    std::string	array[] = {"inf", "inff", "-inf", "-inff", "+inf", "+inff", "nan", "nanf"};
    
    tmp = (this->input).c_str();
    n = std::atoi(tmp);
    if (static_cast<int>(tmp[0]) == 48 && !tmp[1])
        return (n);
    std::string *ptr = std::find(array, array + 8, this->input);
    int idx = ptr - array;
    if (idx < 8)
        throw Scalar::Impossible();
    if (n == 0 && idx == 8)            
        throw Scalar::Impossible();
    return (n);
}

float Scalar::intoFloat() const
{
    float f;
    const char* tmp;

    try
    {
        tmp = (this->input).c_str();
        f = std::atof(tmp);
        if (static_cast<float>(f) == 0 && intoInt() != 0)
            throw Scalar::Impossible();
    }
    catch(...)
    {
        throw Scalar::Impossible();
    }
    return (static_cast<float>(f));
}

double Scalar::intoDouble() const
{
    double d;
    const char* tmp;

    try
    {
        tmp = (this->input).c_str();
        d = std::atof(tmp);
        if (static_cast<double>(d) == 0 && intoInt() != 0)
            throw Scalar::Impossible();
    }
    catch(...)
    {
        throw Scalar::Impossible();
    }
    return (static_cast<double>(d));
}

std::ostream &operator<<(std::ostream& os, const Scalar &tmp)
{
    os << "char : " ;
    try
    {
        char c = tmp.intoChar();
        os << "'" << c << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    os << "int : ";
    try
    {
        int a;
        a = tmp.intoInt();
        os << a << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    os << "float : ";
    try
    {
        float f;
        f = tmp.intoFloat();
        os << f;
        if (f - static_cast<int>(f) == 0)
            os << ".0";
        os << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    os << "double : ";
        try
    {
        double d;
        d = tmp.intoDouble();
        os << d;
        if (d - static_cast<int>(d) == 0)
            os << ".0";
        os << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (os);
}