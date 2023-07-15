#include <ShrubberyCreationForm.hpp>

#include <string>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137)
{
    _target = target;
    std::cout << "New Shrubbery creation Form" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) : Form(ref)
{
    std::cout << "Shrubbery Form used base Form copy constructor to copy" <<std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{
    setSignedStatus(ref.getSignedStatus());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery creation Form shredded" << std::endl;
}

// MEMBERS
void ShrubberyCreationForm::finalExecute() const
{
    std::fstream    outfile;

    outfile.open(_target + "_shrubbery", std::ios::out);

    outfile << "    .    _    +     .  ______   .          .\n\
 (      /|\\      .    |      \\      .   +\n\
     . |||||     _    | |   | | ||         .\n\
.      |||||    | |  _| | | | |_||    .\n\
   /\\  ||||| .  | | |   | |      |       .\n\
__||||_|||||____| |_|_____________\\__________\n\
. |||| |||||  /\\   _____      _____  .   .\n\
  |||| ||||| ||||   .   .  .         ________\n\
 . \\|`-'|||| ||||    __________       .    .\n\
    \\__ |||| ||||      .          .     .\n\
 __    ||||`-'|||  .       .    __________\n\
.    . |||| ___/  ___________             .\n\
   . _ ||||| . _               .   _________\n\
_   ___|||||__  _           .          _\n\
     _ `---'    .        .   _   .   .    .\n\
_  ^      .  -    .  ." << std::endl;

    outfile.close();
}
