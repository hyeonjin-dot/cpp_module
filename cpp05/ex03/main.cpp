#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
  	Intern  someRandomIntern;
	Form*   rrf;

	rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
  return 0;
}