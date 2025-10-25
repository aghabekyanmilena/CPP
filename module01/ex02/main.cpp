#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	// memory address
	std::cout<<"Memory address of str:         "<<&str<<std::endl;
	std::cout<<"Memory address of stringPTR:   "<<stringPTR<<std::endl;
	std::cout<<"Memory address of stringREF:   "<<&stringREF<<std::endl;

	std::cout<<std::endl;

	// values
	std::cout<<"Value of str:                 "<<str<<std::endl;
	std::cout<<"Value pointed to by PTR:      "<<*stringPTR<<std::endl;
	std::cout<<"Value pointed to by REF:      "<<stringREF<<std::endl;
}