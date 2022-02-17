#include "RobotomyRequestForm.hpp"
//Required grades: sign 72, exec 45
RobotomyRequestForm::RobotomyRequestForm():Form("Robot", 45, 72), target("Nonamed")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &tmp):Form("Robot", 45, 72), target(tmp)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &tmp)
{
    *this = tmp;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &tmp)
{
    target = tmp.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void    RobotomyRequestForm::execute(const Bureaucrat &tmp) const
{
    if (Form::getSign() == true)
    {
        if (tmp.getGrade() > Form::getGrade_e())
            throw Form::GradeTooLowException();
        else
        {
			if (rand() % 2 == 1)
			{
                std::cout << "Drillllllll" << std::endl;
                std::cout << "<" << target << "> has been robotomized successfully." << std::endl;
            }	
			else
				std::cout << "<" << target << "> robotomization has failed." << std::endl;
        }
    }
    else
        throw Form::NotSigned();
}