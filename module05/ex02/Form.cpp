#include <Form.hpp>

#include <string>
#include <iostream>
#include <Bureaucrat.hpp>

Form::Form(std::string name, int grade_sign, int grade_exe) : _name(name), _grade_sign(grade_sign), _grade_exe(grade_exe)
{
    if (_grade_exe > 150 || _grade_sign > 150)
        throw Form::GradeTooLowException();
    if (_grade_exe < 1 || _grade_sign < 1)
        throw Form::GradeTooHighException();
    _signed = false;
}

Form::Form(const Form& ref) : _name(ref._name), _grade_sign(ref._grade_sign), _grade_exe(ref._grade_exe)
{
    _signed = false;
}

Form&	Form::operator=(const Form& ref)
{
    _signed = ref._signed;
    return *this;
}

Form::~Form()
{
    std::cout << "destruct form" << std::endl;
}

// MEMBERS
void    Form::beSigned(Bureaucrat& crat)
{
    if (_grade_sign < crat.getGrade())
        throw Form::GradeTooLowException();
    _signed = true;
}

void Form::execute(Bureaucrat const & executor) const
{
    if (_signed == false)
        throw (Form::FormNotSignedException());
    if (_grade_exe < executor.getGrade())
        throw (Form::GradeTooLowException());
    finalExecute();
}

// GETTERS
std::string	Form::getName() const {
    return _name;
}

int		Form::getGradeSign() const {
    return _grade_sign;
}  

int		Form::getGradeExe() const {
    return _grade_exe;
}

bool	Form::getSignedStatus() const {
    return _signed;
}

// SETTERS
void	Form::setSignedStatus(bool status) {
    _signed = status;
}

const char* Form::GradeTooHighException::what() const throw ()
{
    return "Form grade too high";
}

const char* Form::GradeTooLowException::what() const throw ()
{
    return "Form grade too low";
}

const char* Form::FormNotSignedException::what() const throw ()
{
    return "Form is not signed";
}

std::ostream& operator<<(std::ostream & os, const Form& fx)
{
    os <<
        fx.getGradeExe() << ", form grade\n" <<
        fx.getGradeSign() << ", form sign grade\n" <<
        fx.getName() << ",form name\n" <<
        fx.getSignedStatus() << ",form Signed status";
    return os;
}
