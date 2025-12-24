#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat b;
		Bureaucrat bu("Burik", 148);

		try
		{
			b.incrementGrade();
			b.incrementGrade();
			b.incrementGrade();
			b.incrementGrade();
			std::cout << b.getGrade() << std::endl;
			std::cout << b.getName() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			bu.decrementGrade();
			bu.decrementGrade();
			std::cout << bu.getGrade() << std::endl;
			bu.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		try {
			Bureaucrat alpha("Burik", 0);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			Bureaucrat beta("Burik", 155);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			Bureaucrat delta("Burik", 1);
			delta.incrementGrade();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
}
