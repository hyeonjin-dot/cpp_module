#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(const std::string &tmp);
    RobotomyRequestForm(const RobotomyRequestForm &tmp);
    virtual ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &tmp);

    void    execute(const Bureaucrat &tmp) const;

private:
    RobotomyRequestForm();
    std::string target;
};

#endif