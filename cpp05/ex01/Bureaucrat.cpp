#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string &tmp, int num):name(tmp), grade(num)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
}   

Bureaucrat::Bureaucrat(const Bureaucrat &tmp)
{
    *this = tmp;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &tmp)
{
    if (&tmp == this)
        return (*this);
    name = tmp.getName();
    grade = tmp.getGrade();
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string const &Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::IncreaseGrade(int amount)//-
{
    if (this->grade - amount < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade - amount > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = this->grade - amount;
}

void    Bureaucrat::DecreaseGrade(int amount)//+
{
    if (this->grade + amount < 1)
        throw Bureaucrat::GradeTooHighException();
    if (this->grade + amount > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = this->grade + amount;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &tmp)
{
    return (os << "<" << tmp.getName() << ">, Bureaucrat grade <" << tmp.getGrade() << ">.");
}

void    Bureaucrat::signForm(Form &tmp)
{
    try
    {
        tmp.beSigned(*this);
        std::cout << "<" << name << ">  signs <" << tmp.getName() << ">" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "<" << name << "> cannot sign <" << tmp.getName() << "> because <" << e.what() << ">" << '\n';
    }
    
}