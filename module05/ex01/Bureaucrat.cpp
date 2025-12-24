#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Buro"), grade(150)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : name(name), grade(grade)
{
	std::cout << "Parameterized constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Copy assignment operator" << std::endl;
	if (this != &other)
		this->grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "incrementGrade member function" << std::endl;
	if (--grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	std::cout << "decrementGrade member function" << std::endl;
	if (++grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &buro)
{
	os << buro.getName() << ", bureaucrat grade " << buro.getGrade() << std::endl;
	return os;
}

void	Bureaucrat::signForm(Form& form) {
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