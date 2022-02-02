#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class   Bureaucrat;

class Form
{
private:
    std::string name;
    bool        sign;
    int         grade_e;
    int         grade_s;
public:
    Form();
    Form(const std::string& name, int grade_e, int grade_s);
    Form(const Form &tmp);
    virtual ~Form();

    Form &operator=(const Form &tmp);

    std::string const &getName() const;
    int         getGrade_e() const;
    int         getGrade_s() const;
    bool        getSign() const;

    void    beSigned(const Bureaucrat& tmp);

    virtual void    execute(Bureaucrat const &tmp) const = 0;

    class GradeTooHighException : public std::exception 
    { 
        public: 
            virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception 
    { 
        public: 
            virtual const char* what() const throw();
    };

    class NotSigned : public std::exception 
    { 
        public: 
            virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream& os, const Form &tmp);


#endif