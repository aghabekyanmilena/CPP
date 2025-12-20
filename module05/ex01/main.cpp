#include "Bureaucrat.hpp"
#include "Form.hpp"

// int main()
// {
// 	Bureaucrat bob("Bob", 100);
// 	Bureaucrat chbob("ChBob", 1);

// 	Form tax("Tax", 50, 20);

// 	bob.signForm(tax);
// 	chbob.signForm(tax);

// 	return 0;
// }

int main()
{
	try {
        Form f1("TaxForm", 25, 1);
        Form f2("SecretForm", 1, 1);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;

        try {
            Form bad("BadForm", 160, 20); // too low
        } catch (Form::GradeTooLowException &e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }

        try {
            Form bad2("TooHighForm", 0, 5); // too high
        } catch (Form::GradeTooHighException &e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }

        Bureaucrat bob("Bob", 40);
        Bureaucrat jim("Jim", 100);

        // std::cout << bob << std::endl;
        // std::cout << jim << std::endl;

        std::cout << "\nTrying to sign f1 with Jim (grade 100, required 50) → should fail" << std::endl;
        jim.signForm(f1);

        std::cout << "\nTrying to sign f1 with Bob (grade 40, required 50) → should succeed" << std::endl;
        bob.signForm(f1);

        // std::cout << f1 << std::endl;

    } catch (std::exception &e) {
        std::cout << "Unhandled exception: " << e.what() << std::endl;
    }

    return 0;
}