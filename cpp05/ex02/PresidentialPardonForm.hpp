#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(const std::string &tmp);
    PresidentialPardonForm(const PresidentialPardonForm &tmp);
    virtual ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &tmp);

    void    execute(const Bureaucrat &tmp) const;
private:
    PresidentialPardonForm();
    std::string target;
};

#endif