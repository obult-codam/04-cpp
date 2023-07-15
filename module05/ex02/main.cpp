#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



int     main(void)
{
    Bureaucrat crat("Crat", 5);
    Bureaucrat krat("Krat", 72);
    Bureaucrat qrat("Qrat", 150);

    ShrubberyCreationForm Form42("car_bushes");
    RobotomyRequestForm RoboCopForm("RoboCop");
    PresidentialPardonForm PressForm("free_willy");

    std::cout << std::endl;

    crat.signForm(Form42);
    crat.executeForm(Form42);

    std::cout << std::endl;

    crat.signForm(RoboCopForm);
    crat.executeForm(RoboCopForm);

    std::cout << std::endl;

    crat.signForm(PressForm);
    crat.executeForm(PressForm);

    std::cout << std::endl;
}
