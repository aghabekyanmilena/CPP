#pragma once

#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

class AForm
{
private:
	const std::string name;
	bool is_signed;
	const int gradeToSign;
	const int gradeToExecute;
public:
	AForm();
	AForm(const std::string name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &other);
	AForm &operator=(const AForm &other);
	virtual ~AForm(); // virual

	// getters
	std::string getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	// sign
	void beSigned(const Bureaucrat &buro);
	virtual void	execute(Bureaucrat const &executor) const = 0; // virtual

	// exceptions
	class GradeTooHighException: public std::exception {
		public:
			const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
		public:
			const char *what() const throw();
	};
	class ExecuteUnsignedForm: public std::exception {
		public:
			const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, const AForm &f);