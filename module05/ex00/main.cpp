#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat burik1("Burik", 2);
		std::cout << burik1 << std::endl;
		burik1.incrementGrade();
		std::cout << burik1 << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "========================" << std::endl;
	try
	{
		Bureaucrat burik2("Buro", 150);
		burik2.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
