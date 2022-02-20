#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  std::string a = "target0";
  std::string b = "Man0";
  std::string a1 = "target1";
  std::string b1 = "Man1";
  std::string a2 = "target1";
  std::string b2 = "Man1";
  try
	{
		ShrubberyCreationForm	scf(a);
		Bureaucrat				man(b, 1);

		std::cout << man << std::endl;
		man.executeForm(scf);
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
		RobotomyRequestForm		rob(a1);
		Bureaucrat				man0(b1, 44);

		std::cout << man0 << std::endl;
		man0.executeForm(rob);
		man0.signForm(rob);
		std::cout << rob;
		man0.executeForm(rob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm		ref(a2);
		Bureaucrat				man1(b2, 1);

		std::cout << man1 << std::endl;
		man1.executeForm(ref);
		man1.signForm(ref);
		std::cout << ref;
		man1.executeForm(ref);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
  return 0;
}