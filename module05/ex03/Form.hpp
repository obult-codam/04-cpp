#ifndef FORM_HPP
# define FORM_HPP

#include <string>

class	Bureaucrat;


class	Form
{
public:
	virtual ~Form();
	Form(std::string name, int grade_sign, int grade_exe);
	Form(const Form& ref);
	Form& operator=(const Form& ref);

	void beSigned(Bureaucrat& crat);
	void execute(Bureaucrat const & executor) const ;

	// GETTERS
	std::string	getName() const;
	int		getGradeSign() const;
	int		getGradeExe() const;
	bool	getSignedStatus() const;

	// SETTERS
	void	setSignedStatus(bool status);

	//  EXCEPTIONS
	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw (); 
		};
	class GradeTooLowException : public std::exception {
		virtual const char* what() const throw (); 
		};
	class FormNotSignedException : public std::exception {
		virtual const char* what() const throw (); 
		};
protected:
	virtual void finalExecute() const = 0;
	std::string	_target;
private:
	Form();
	const std::string	_name;
	const int			_grade_sign;
	const int			_grade_exe;
	bool				_signed;
};

#endif
