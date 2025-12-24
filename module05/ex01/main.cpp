#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void) {

	{
		Bureaucrat	b("Burik", 25);
		Form		form("form", 25 , 75);

		try
		{
			b.signForm(form);
			std::cout << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	{
		try {
			Form	formik("form 1", 0 , 75);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			Form	formik("form 2", 75 , 155);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			Form	formik("form 3", 75 , 75);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}

}