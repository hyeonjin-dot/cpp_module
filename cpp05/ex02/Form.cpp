#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
    name = "Nonamed";
    sign = false;
    grade_e = 1;
    grade_s = 1;
}

Form::Form(const std::string &name, int grade_e, int grade_s):name(name), grade_e(grade_e), grade_s(grade_s)
{
    if (grade_e < 1 || grade_s < 1)
        throw Form::GradeTooHighException();
    if (grade_e > 150 || grade_s > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &tmp):name(tmp.name), grade_e(tmp.grade_e), grade_s(tmp.grade_s)
{
    sign = tmp.sign;
    *this = tmp;
}

Form::~Form()
{
}

Form &Form::operator=(const Form &tmp)
{
    sign = tmp.sign;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

const char* Form::NotSigned::what() const throw()
{
    return ("Not signed");
}

std::ostream& operator<<(std::ostream& os, const Form &tmp)
{
    os << "<" << tmp.getName() << ">" << std::endl;
    os << "<" << tmp.getGrade_s() << "> : a grade required to sign it." << std::endl;
    os << "<" << tmp.getGrade_e() << "> : a grade required to execute it." << std::endl;
    if (tmp.getSign() == true)
        os << "signed." << std::endl;
    else
        os << "not signed." << std::endl;
    return (os);
}

std::string const &Form::getName() const
{
    return (name);
}

int Form::getGrade_s() const
{
    return (grade_s);
}

int Form::getGrade_e() const
{
    return (grade_e);
}

bool    Form::getSign() const
{
    return (sign);
}

void    Form::beSigned(const Bureaucrat& tmp)
{
    if (tmp.getGrade() < grade_s)
        sign = true;
    else
        throw Form::GradeTooLowException();
}
