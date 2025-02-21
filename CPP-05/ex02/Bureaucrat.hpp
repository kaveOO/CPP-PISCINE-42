#pragma once

#include "Bureaucrat.h"

class AForm;

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		// Constructor(s)
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);
		// Destructor(s)
		~Bureaucrat();
		// Overload Operator(s)
		Bureaucrat &operator=(const Bureaucrat &assign);
		// Getter(s)
		std::string getName() const;
		int			getGrade() const;
		// Class Function(s)
		void		promote();
		void		demote();
		void		signForm(AForm &AForm);
		void		executeForm(AForm const &form);
	// Exception(s)
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &Bureaucrat);
