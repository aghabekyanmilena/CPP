#pragma once

#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string name;
	bool is_signed;
	const int gradeToSign;
	const int gradeToExecute;
public:
	Form();
	Form(const std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &other);
	Form &operator=(const Form &other);
	~Form();

	// getters
	std::string getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	// sign
	void beSigned(const Bureaucrat &buro);

	// exceptions
	class GradeTooHighException: public std::exception {
		public:
			const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		public:
			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const Form &f);