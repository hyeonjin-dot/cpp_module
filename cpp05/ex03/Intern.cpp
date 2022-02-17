#include "Intern.hpp"

const std::string Intern::lst[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};

Intern::Intern()
{
}

Intern::Intern(const Intern &tmp)
{
    *this = tmp;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &tmp)
{
    (void) tmp;
    return (*this);
}

Form*   Intern::makeForm(const std::string& form, const std::string& target)
{
    Form* (*unit[3])(const std::string &) = {shr, rob, pre};

    for (int i = 0; i < 3; i++)
	{
		if (lst[i].compare(form) == 0)
		{
			std::cout << "Intern creates <" << form << ">." << std::endl;
			return (unit[i](target));
		}
	}
    std::cout << "Intern cannot create." << std::endl;
    return (0);
}

Form*   shr(const std::string &target)
{
    return (new ShrubberyCreationForm(target));
}

Form*   rob(const std::string &target)
{
    return (new RobotomyRequestForm(target));
}

Form*   pre(const std::string &target)
{
    return (new PresidentialPardonForm(target));
}