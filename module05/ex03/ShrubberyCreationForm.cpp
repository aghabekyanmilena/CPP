#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Bob")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), target(other.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm copy assignment operator" << std::endl;
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	AForm::execute(executor);
	std::ofstream file((target + "_shrubbery").c_str());
	if (!file.is_open())
	{
		std::cerr << "Can not open the file!" << std::endl;
		return ;
	}
	file << shub << std::endl;
	file.close();
}

const std::string ShrubberyCreationForm::shub =
    "       ccee88oo\n"
    "  C8O8O8Q8PoOb o8oo\n"
    " dOB6HAPPYNEWYEAAARbD\n"
    "CgggbU8OU qOp qOdoUOdcb\n"
    "    6OuU  /p u gcoUodpP\n"
    "      \\\\ //  /douUP\n"
    "        \\\\\\ /////\n"
    "         |||/\\\n"
    "         |||\\/\n"
    "         |||||\n"
    "   .....//||||\\....\n";