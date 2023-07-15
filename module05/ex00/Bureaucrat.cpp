#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Created Bureaucrat " << _name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) : _name(ref._name)
{
    *this = ref;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ref)
{
    _grade = ref._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destroyed bureaucrat " << _name << std::endl;
}

// GETTERS

int Bureaucrat::getGrade() const
{
    return _grade;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

// CREMENTERS

void Bureaucrat::increment()
{
    _grade--;
    if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrement()
{
    _grade++;
    if (_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw ()
{
    return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw ()
{
    return "Grade too low";
}

// OVERLOAD << OSTREAM

std::ostream& operator<<(std::ostream & os, const Bureaucrat& fx)
{
    os <<
        fx.getName() <<
        ", bureaucrat grade " <<
        fx.getGrade();
    return os;
}
