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

int ft_strlen(const char* tmp)
{
    int i = 0;
    while (tmp[i])
        i++;
    return i;
}

bool    check_num(const char* tmp)
{
    int i=0;
    while (tmp[i])
    {
        if (tmp[i] < 47 || tmp[i] > 57)
            return (false);
        i++;
    }
    return (true);
}

char    Scalar::intoChar() const
{
    int n;
    const char* tmp;
    std::string	array[] = {"inf", "inff", "-inf", "-inff", "+inf", "+inff", "nan", "nanf"};


        tmp = (this->input).c_str();
        n = std::atoi(tmp);
        if (ft_strlen(tmp) == 1 && (static_cast<int>(tmp[0]) < 48 || static_cast<int>(tmp[0]) > 57))
            return (static_cast<char>(tmp[0]));
        std::string *ptr = std::find(array, array + 8, this->input);
        int idx = ptr - array;
        if (idx < 8)
            throw Scalar::Impossible();
        if ((n < 32 || n > 126) && check_num(tmp))
            throw Scalar::Nondisplay();
        if (idx == 8 && ft_strlen(tmp) > 1 && !check_num(tmp))
            throw Scalar::Impossible();
    return (static_cast<char>(n));
}

int Scalar::intoInt() const
{
    int n;
    const char* tmp;
    std::string	array[] = {"inf", "inff", "-inf", "-inff", "+inf", "+inff", "nan", "nanf"};
    
    tmp = (this->input).c_str();
    n = std::atoi(tmp);
    if (ft_strlen(tmp) == 1 && (static_cast<int>(tmp[0]) < 48 || static_cast<int>(tmp[0]) > 57))
        return (static_cast<int>(tmp[0]));
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


        tmp = (this->input).c_str();
        f = std::atof(tmp);
        if (ft_strlen(tmp) == 1 && (static_cast<int>(tmp[0]) < 48 || static_cast<int>(tmp[0]) > 57))
            return (static_cast<float>(tmp[0]));
        if (!check_num(tmp) && static_cast<int>(f) == 0)
            throw Scalar::Impossible();
    return (static_cast<float>(f));
}

double Scalar::intoDouble() const
{
    double d;
    const char* tmp;


        tmp = (this->input).c_str();
        d = std::atof(tmp);
        if (ft_strlen(tmp) == 1 && (static_cast<int>(tmp[0]) < 48 || static_cast<int>(tmp[0]) > 57))
            return (static_cast<double>(tmp[0]));
        if (!check_num(tmp) && static_cast<int>(d) == 0)
            throw Scalar::Impossible();

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