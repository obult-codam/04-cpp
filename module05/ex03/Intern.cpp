#include <Intern.hpp>

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

#include <string>
#include <iostream>

Intern::Intern()
{

}

Intern::Intern(const Intern& ref)
{
    *this = ref;
}

Intern&	Intern::operator=(const Intern& ref)
{
    (void) ref;
    return *this;
}

Intern::~Intern()
{

}

//  MEMBERS
Form *Intern::makeForm(std::string form_name, std::string target)
{  
    std::string table[] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    int32_t i;
    for (i = 0; i < 3; i++)
        if (table[i] == form_name)
            break;

    switch (i) 
    {
        case 0:
            return new RobotomyRequestForm(target);
        case 1:
            return new PresidentialPardonForm(target);
        case 2:
            return new ShrubberyCreationForm(target);
    }

    std::cout << "very explicit error message that the form does not exist" << std::endl;

    return NULL;
}