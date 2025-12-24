#pragma once

#include <iostream>

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

// operator <<
std::ostream &operator<<(std::ostream &os, const Bureaucrat &buro);