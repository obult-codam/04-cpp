#include <PresidentialPardonForm.hpp>

#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential pardon", 25, 5)
{
    _target = target;
    std::cout << "New Presidential pardon Form" <<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) : Form(ref)
{
    std::cout << "Presidential Form used base Form copy constructor to copy" <<std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ref)
{
    setSignedStatus(ref.getSignedStatus());
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential pardon Form shredded" << std::endl;
}

// MEMBERS
void PresidentialPardonForm::finalExecute() const
{
    std::cout << _target << "has been Pardoned by Zaphod Beeblebrox" << std::endl;
}
