#pragma once

#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	const std::string name;
	int grade; // 1 big 150 small
public:
	// constructors and destructor
	Bureaucrat();
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	~Bureaucrat();

	// sign form
	void	signForm(AForm &form);
	void	executeForm(AForm const &form);

	// getters
	std::string getName() const;
	int getGrade() const;

	// grade inc/dec
	void incrementGrade();
	void decrementGrade();

	// exeptions
	class GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			const char *what() const throw();
	};
};

#include "AForm.hpp"

// operator <<
std::ostream &operator<<(std::ostream &os, const Bureaucrat &buro);