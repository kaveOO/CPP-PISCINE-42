#include "ShrubberyCreationForm.hpp"

// Constructor(s)
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Contract", 145, 137), target("default")
{
	std::cout << "ShrubberyCreationForm -> Default constructor has been called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec()), target(copy.target)
{
	std::cout << "ShrubberyCreationForm -> Copy constructor has been called" << std::endl;
}
