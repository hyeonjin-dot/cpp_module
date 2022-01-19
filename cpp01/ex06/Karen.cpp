#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void	Karen::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void    Karen::complain(std::string level)
{
	t_find	table[4] = {
		{"DEBUG",	&Karen::debug},
		{"INFO",	&Karen::info},
		{"WARNING",	&Karen::warning},
		{"ERROR",	&Karen::error}
	};
	std::string	array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string *ptr = std::find(array, array + 4, level);
	int idx = ptr - array;
	void	(Karen::*tmp)(void);

	switch (idx)
	{
	case 4:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	case 0:
		tmp = table[0].f;
		(this->*tmp)();
	case 1:
		tmp = table[1].f;
		(this->*tmp)();
	case 2:
		tmp = table[2].f;
		(this->*tmp)();
	case 3:
		tmp = table[3].f;
		(this->*tmp)();
	}
	
}