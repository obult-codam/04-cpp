#include <RobotomyRequestForm.hpp>

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45)
{
    _target = target;
    std::cout << "New Robotics request Form" <<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) : Form(ref)
{
    std::cout << "Robotomy Form used base Form copy constructor to copy" <<std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& ref)
{
    setSignedStatus(ref.getSignedStatus());
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy request Form shredded" << std::endl;
}

// MEMBERS
void    RobotomyRequestForm::finalExecute() const
{
    std::cout << "drrrrrriiiiiillling noices" << std::endl;
    std::srand(std::time(NULL));
    if (std::rand() % 2 == 1)
        std::cout << _target << " has been robotomyziced" << std::endl;
    else
        std::cout << "failed to robo-tize " << _target << std::endl;
}