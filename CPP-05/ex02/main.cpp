#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	Bureaucrat albillie("albillie", 140);
	ShrubberyCreationForm test;

	std::cout << '\n';
	std::cout << "**********************************" << std::endl;
	std::cout << "| MUST BE SIGNED BEFORE EXECUTED |" << std::endl;
	std::cout << "**********************************" << std::endl;
	std::cout << '\n';

	albillie.signForm(test);
	albillie.executeForm(test);







	std::cout << '\n';
	std::cout << "***************" << std::endl;
	std::cout << "| DESTRUCTORS |" << std::endl;
	std::cout << "***************" << std::endl;
	std::cout << '\n';
}
