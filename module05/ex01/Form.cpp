#include "Form.hpp"

Form::Form() : name("Form"),
	is_signed(false), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
	: name(name), is_signed(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "Form parametrized constructor called" << std::endl;
	if (gradeToSign < 1|| gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &other)
	: name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form copy assignment operator" << std::endl;
	if (this != &other)
		this->is_signed = other.is_signed;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructir called" << std::endl;
}

// getters
std::string Form::getName() const { return this->name; }
bool Form::isSigned() const { return this->is_signed; }
int Form::getGradeToExecute() const { return this->gradeToExecute; }
int Form::getGradeToSign() const { return this->gradeToSign; }

void Form::beSigned(const Bureaucrat &buro)
{
	if (buro.getGrade() > gradeToSign)
		throw GradeTooLowException();
	else
		is_signed = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Form: Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Form: Grade too low";
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form " << f.getName()
		<< " [signed: " << (f.isSigned() ? "yes" : "no")
		<< ", grade to sign: " << f.getGradeToSign()
		<< ", grade to execute: " << f.getGradeToExecute()
		<< "]";
	return os;
}