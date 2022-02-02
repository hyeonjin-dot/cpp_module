#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  std::string a = "target";
  std::string b = "Man";
  try
	{
		ShrubberyCreationForm	scf(a);
		Bureaucrat				man(b, 1);

		std::cout << man << std::endl;
		man.signForm(scf);
		std::cout << scf;
		man.executeForm(scf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm		ref(a);
		Bureaucrat				man(b, 44);

		std::cout << man << std::endl;
		man.signForm(ref);
		std::cout << ref;
		man.executeForm(ref);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm		ref(a);
		Bureaucrat				man(b, 1);

		std::cout << man << std::endl;
		man.signForm(ref);
		std::cout << ref;
		man.executeForm(ref);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
  return 0;
}