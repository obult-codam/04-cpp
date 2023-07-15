#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& ref);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
	~ShrubberyCreationForm();

	// MEMBERS
	void finalExecute() const ;
private:
	ShrubberyCreationForm();
};

#endif
