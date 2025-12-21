#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default construcor called" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	std::cout << "Intern copy assignment operator called" << std::endl;
	// if (this != &other)
	// 	;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

AForm *Intern::makeForm(std::string name, std::string target) const
{
	int i = 0;
	std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation", "NULL"};

	while (name != forms[i] && forms[i] != "NULL")
		i++;
	switch (i)
	{
		case(0):
			return (new PresidentialPardonForm(target));
		case(1):
			return (new RobotomyRequestForm(target));
		case(2):
			return (new ShrubberyCreationForm(target));
		default:
			std::cout << "Inten can't made form by this request: " + name << std::endl;
			std::cout << "Allowed requests <" + forms[0] + "> <" + forms[1] + "> <" + forms[2] + ">" << std::endl;
			return (NULL);
	}
}