#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	{
		std::cout << std::endl;
		Intern	randomIntern;
		AForm*	formik;

		formik = randomIntern.makeForm("robotomy request", "Robotom");
		if (formik)	
			std::cout << *formik << std::endl;
		delete formik;
	}
	std::cout << std::endl;

	{
		std::cout << std::endl;
		Intern	randomIntern;
		AForm*	formik;

		formik = randomIntern.makeForm("presidential pardon", "President");
		if (formik)
			std::cout << *formik << std::endl;
		delete formik;
	}
	std::cout << std::endl;

	{
		std::cout << std::endl;
		Intern	randomIntern;
		AForm*	formik;

		formik = randomIntern.makeForm("shrubbery creation", "Vitamin");
		if (formik)
			std::cout << *formik << std::endl;
		delete formik;
	}
	std::cout << std::endl;

	{
		std::cout << std::endl;
		Intern	randomIntern;
		AForm*	formik;

		formik = randomIntern.makeForm("Go away, psht", "davachan");
		if (formik)
			std::cout << *formik << std::endl;
		delete formik;
	}
	std::cout << std::endl;
}