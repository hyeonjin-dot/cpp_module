#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::asci = "  *  \n *** \n*****\n 11     ";

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreation", 137, 145), target("Nonamed")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):Form("ShrubberyCreation", 137, 145), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &tmp)
{
    *this = tmp;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &tmp)
{
    target = tmp.target;
    return (*this);
}

const char* ShrubberyCreationForm::FailToOpen::what() const throw()
{
    return ("Fail to open");
}

void    ShrubberyCreationForm::execute(Bureaucrat const &tmp) const
{
    if (Form::getSign() == true)
    {
        if (tmp.getGrade() > Form::getGrade_e())
            throw Form::GradeTooLowException();
        else
        {
            std::string out_name = target + "_shrubbery";
            std::ofstream ofs;
            ofs.open(out_name);
            if (ofs.is_open())
            {
                ofs << asci;
                std::cout << "here" << std::endl;//
                ofs.close();
            }
            else
                throw ShrubberyCreationForm::FailToOpen();
        }
    }
    else
        throw Form::NotSigned();
}