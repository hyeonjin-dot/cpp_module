#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
  	Intern  someRandomIntern;
	Form*   rrf1;
	Form*   rrf2;
	Form*   rrf3;

	try
	{
		rrf1 = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		rrf2 = someRandomIntern.makeForm("ShrubberyCreation", "Bender");
		rrf3 = someRandomIntern.makeForm("PresidentialPardon", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

  return 0;
}