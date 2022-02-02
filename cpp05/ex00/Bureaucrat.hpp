#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    std::string name;
    int         grade;
public:
    Bureaucrat();
    Bureaucrat(std::string &tmp, int num);
    Bureaucrat(const Bureaucrat &tmp);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &tmp);

    std::string const &getName() const;
    int  getGrade() const;

    void    IncreaseGrade(int amount);
    void    DecreaseGrade(int amount);

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

};

std::ostream &operator<<(std::ostream& os, const Bureaucrat &tmp);

#endif