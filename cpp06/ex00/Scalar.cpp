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

char    Scalar::intoChar() const
{
    int n;

    try
    {
        n = std::stoi(this->input);
        if (isinf(n)|| isnan(n))
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

    try
    {
        n = std::stoi((this->input));
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
        f = std::stof((this->input));
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

    try
    {
        d = std::stod((this->input));
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
        if (isinf(a) == true)
            throw Scalar::Impossible();
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