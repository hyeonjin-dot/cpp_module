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
	
	std::cout << "---------------" << std::endl;

	Intern a;
	Intern b;
	Intern c;

	Form *a1;
	Form *b1;
	Form *c1;

	a1 = a.makeForm("ShrubberyCreation", "A");
	b1 = b.makeForm("PresidentialPardon", "B");
	c1 = c.makeForm("WrongRequest", "C");
	std::cout << "-------------" << std::endl;

	std::string n = "new";
	Bureaucrat				man(n, 1);

	std::cout << man << std::endl;
	man.signForm(*a1);
	std::cout << *a1;
	man.executeForm(*a1);

	std::cout << "-------------" << std::endl;

	n = "pre";
	Bureaucrat				man1(n, 6);

	std::cout << man1 << std::endl;
	man1.signForm(*b1);
	std::cout << *b1;
	man1.executeForm(*b1);

	std::cout << "-------------" << std::endl;

	n = "rob";
	Bureaucrat				man2(n, 3);

	std::cout << man2 << std::endl;
	man2.signForm(*rrf);
	std::cout << *rrf;
	man2.executeForm(*rrf);
}