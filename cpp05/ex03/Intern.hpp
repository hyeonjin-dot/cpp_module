#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
    const static std::string lst[3];
public:
    Intern();
    Intern(const Intern &tmp);
    ~Intern();

    Intern &operator=(const Intern &tmp);

    Form* makeForm(const std::string& form, const std::string& target);
};

Form*   shr(const std::string &target);
Form*   rob(const std::string &target);
Form*   pre(const std::string &target);


#endif