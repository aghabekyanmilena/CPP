#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Buro"), grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name(name), grade(grade)
{
	std::cout << "Bureaucrat parameterized constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy assignment operator" << std::endl;
	if (this != &other)
		this->grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	std::cout << "Bureaucrat incrementGrade member function" << std::endl;
	if (--grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	std::cout << "Bureaucrat decrementGrade member function" << std::endl;
	if (++grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat: Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat: Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &buro)
{
	os << buro.getName() << ", bureaucrat grade " << buro.getGrade() << std::endl;
	return os;
}

void	Bureaucrat::signForm(AForm& form) {
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() \
			<< std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " couldn't sign " \
			<< form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " exectued " << form.getName() <<
			std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName()
			<< " because " << e.what() << std::endl;
	}
}