#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl entered the place." << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harled got arrested." << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]   ";
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]    "
			<< "I cannot believe adding extra bacon cost more money."
			<< " You don’t put enough! If you did I would not have to ask"
			<< " for it!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] ";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]   ";
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0; 
	for (; i < 4 && levels[i] != level; i++)
		;
	switch (i)
    {
		default:
			std::cerr << "Invalid level" << std::endl;
			break ;
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
    }
}
