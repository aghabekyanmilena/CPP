#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat bob("Bob", 100);
	Bureaucrat chbob("ChBob", 1);

	Form tax("Tax", 50, 20);

	bob.signForm(tax);
	chbob.signForm(tax);

	return 0;
}
