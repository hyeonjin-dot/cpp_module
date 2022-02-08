#include "Scalar.hpp"

/*Scalar::Scalar()
{
    input = "Nothing";
}*/

Scalar::Scalar(std::string &tmp): input(tmp)
{
}

/*Scalar::Scalar(const Scalar &tmp)
{
    input = tmp.input;
}*/

Scalar::~Scalar()
{
}

/*Scalar &Scalar::operator=(const Scalar &tmp)
{
    input = tmp.input;
    return (*this);
}*/

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

char    Scalar::intoChar() const
{
    int n;

    try
    {
        n = std::stoi(this->input);
        if (n < 0 || n > 255)
            throw Scalar::Impossible();
    }
    catch(...)
    {
        throw Scalar::Impossible();
    }
    if (n == 0)
        throw Scalar::Nondisplay();
    return (n);
}

int Scalar::intoInt() const
{
    int n;

    try
    {
        n = std::stoi(this->input);
    }
    catch(...)
    {
        throw Scalar::Impossible();
    }
    return (n);
}

float Scalar::intoFloat() const
{
    float f;

    try
    {
        f = std::stof(this->input);
    }
    catch(...)
    {
        throw Scalar::Impossible();
    }
    return (f);
}

double Scalar::intoDouble() const
{
    double d;

    try
    {
        d = std::stod(this->input);
    }
    catch(...)
    {
        throw Scalar::Impossible();
    }
    return (d);
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
    os << "float : ";//-inff, +inff and nanf
    try
    {
        float f;
        f = tmp.intoFloat();
        os << f;
        if (f - (int)f == 0)
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
        if (d - (int)d == 0)
            os << ".0";
        os << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (os);
}