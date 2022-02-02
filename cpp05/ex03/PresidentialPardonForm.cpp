#include "PresidentialPardonForm.hpp"
//sign 25, exec 5
PresidentialPardonForm::PresidentialPardonForm():Form("Presidential", 5, 25), target("Nonamed")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &tmp):Form("Presidential", 5, 25), target(tmp)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &tmp)
{
    *this = tmp;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &tmp)
{
    return (*this);
}

void    PresidentialPardonForm::execute(const Bureaucrat &tmp) const
{
    if (Form::getSign() == true)
    {
        if (tmp.getGrade() > Form::getGrade_e())
            throw Form::GradeTooLowException();
        else
            std::cout << "<" << target << "> has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    else
        throw Form::NotSigned();
}