#include "Bureaucrat.hpp"

// int main()
// {
	// try
	// {
	// 	Bureaucrat burik1("Burik", 2);
	// 	std::cout << burik1 << std::endl;
	// 	burik1.incrementGrade();
	// 	std::cout << burik1 << std::endl;
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }
	// std::cout << "========================" << std::endl;
	// try
	// {
	// 	Bureaucrat burik2("Buro", 150);
	// 	burik2.decrementGrade();
	// }
	// catch (std::exception& e)
	// {
	// 	std::cout << "Exception: " << e.what() << std::endl;
	// }

	// return 0;
// }

int main()
{
	{
		Bureaucrat meta;
		Bureaucrat gama("Bob", 148);

		try
		{
			meta.incrementGrade();
			meta.incrementGrade();
			meta.incrementGrade();
			meta.incrementGrade();
			std::cout << meta.getGrade() << std::endl;
			std::cout << meta.getName() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			gama.decrementGrade();
			gama.decrementGrade();
			std::cout << gama.getGrade() << std::endl;
			gama.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		try {
			Bureaucrat alpha("Seda", 0);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			Bureaucrat beta("Adel", 155);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			Bureaucrat delta("Narek", 1);
			delta.incrementGrade();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
}
