#ifndef FORM_HPP
# define FORM_HPP

#include <string>

class	Bureaucrat;

class	Form
{
public:
	Form(std::string name, int grade_sign, int grade_exe);
	Form(const Form& ref);
	Form& operator=(const Form& ref);
	virtual ~Form();

	void beSigned(Bureaucrat& crat);

	// GETTERS
	std::string	getName() const;
	int		getGradeSign() const;
	int		getGradeExe() const;
	bool	getSignedStatus() const;

	//  EXCEPTIONS
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw (); 
		};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw (); 
		};
private:
	Form();
	const std::string	_name;
	const int			_grade_sign;
	const int			_grade_exe;
	bool				_signed;
};

#endif
