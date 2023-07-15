#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class	Bureaucrat
{
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& ref);
	Bureaucrat& operator=(const Bureaucrat& ref);
	~Bureaucrat();

	// MEMBERS
	void signForm(Form& form);
	void executeForm(Form const & form);

	// GETTERS
	std::string getName() const ;
	int getGrade() const ;

	// CREMENTERS
	void increment();
	void decrement();

	// EXCEPTIONS
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw (); 
		};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw (); 
		};
private:
	Bureaucrat();
	const std::string	_name;
	int					_grade;
};

std::ostream& operator<<(std::ostream & os, const Bureaucrat& fx);

#endif
