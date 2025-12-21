#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		std::cout << std::endl;
		try
		{
			ShrubberyCreationForm	form("Tree");
			Bureaucrat				Burik("Burik", 35);

			form.beSigned(Burik);
			form.execute(Burik);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		std::cout << std::endl;
		try
		{
			RobotomyRequestForm		form;
			Bureaucrat				Burik("Burik", 35);

			form.beSigned(Burik);
			form.execute(Burik);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		std::cout << std::endl;
		try
		{
			RobotomyRequestForm		form;
			Bureaucrat				Burik("Burik", 34);

			form.beSigned(Burik);
			form.execute(Burik);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}

	{
		std::cout << std::endl;
		try
		{
			PresidentialPardonForm	form;
			Bureaucrat				Burik("Burik", 4);

			form.beSigned(Burik);
			std::cout << form << std::endl;
			form.execute(Burik);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}
}