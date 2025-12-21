#include "AForm.hpp"

// constructors and destructors
AForm::AForm() : name("AForm"),
	is_signed(false), gradeToSign(150), gradeToExecute(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute)
	: name(name), is_signed(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "AForm parameterized constructor called" << std::endl;
	if (gradeToSign < 1|| gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
	: name(other.name), is_signed(other.is_signed), gradeToSign(other.gradeToSign), gradeToExecute(other.gradeToExecute)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "AForm copy assignment operator" << std::endl;
	if (this != &other)
		this->is_signed = other.is_signed;
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

// getters
std::string AForm::getName() const { return this->name; }
bool AForm::isSigned() const { return this->is_signed; }
int AForm::getGradeToExecute() const { return this->gradeToExecute; }
int AForm::getGradeToSign() const { return this->gradeToSign; }

// beSigned
void AForm::beSigned(const Bureaucrat &buro)
{
	if (buro.getGrade() > gradeToSign)
	{
		std::cout << gradeToSign << " " << buro.getGrade() << std::endl;
		throw GradeTooLowException();
	}
	else
		is_signed = true;
}

// EXCEPTIONS
const char *AForm::GradeTooHighException::what() const throw()
{
	return "AForm: Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "AForm: Grade too low";
}

const char *AForm::ExecuteUnsignedForm::what() const throw()
{
	return "AForm: Form is not signed 😢";
}

void	AForm::execute(Bureaucrat const &executor) const
{
	if (is_signed == false)
		throw AForm::ExecuteUnsignedForm();
	if (executor.getGrade() > gradeToExecute)
		throw AForm::GradeTooLowException();
}

// ostream
std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << "AForm " << f.getName()
		<< " [signed: " << (f.isSigned() ? "yes" : "no")
		<< ", grade to sign: " << f.getGradeToSign()
		<< ", grade to execute: " << f.getGradeToExecute()
		<< "]";
	return os;
}