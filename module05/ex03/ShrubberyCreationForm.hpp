#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string target;
	static const std::string shub;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
};