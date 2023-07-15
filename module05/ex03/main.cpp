#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



int     main(void)
{
    Bureaucrat crat("Crat", 5);
    Intern  someRandomIntern;
    Form*   rrf;

    std::cout << std::endl;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    std::cout << std::endl;

    crat.executeForm(*rrf);

    std::cout << std::endl;

    delete rrf;
}
