#include "Harl.hpp"

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string level;
	std::cout<<"Enter level (DEBUG, INFO, WARNING, ERROR):"<<std::endl;

	while (true)
	{
		std::getline(std::cin, level);
		if (level == "exit" || std::cin.eof())
		{
			std::cout <<"Exit"<< std::endl;
			break;
		}
		harl.complain(level);
	}
	return 0;
}
