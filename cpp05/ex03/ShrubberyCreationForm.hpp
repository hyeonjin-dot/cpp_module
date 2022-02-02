#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm();    
    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm &tmp);
    virtual ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &tmp);

    void    execute(Bureaucrat const &tmp) const;

    class FailToOpen : public std::exception 
    { 
        public: 
            virtual const char* what() const throw();
    };

private:
    
    std::string     target;
    static const std::string    asci;
};

#endif