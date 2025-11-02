#include "Replace.hpp"

int main(int argc, char **argv)
{

	if (argc != 4)
	{
		std::cerr<<"Usage: ./replace <filename> <s1> <s2>"<<std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "s1 and s2 cannot be empty" << std::endl;
		return (1);
	}
	if (!searchandreplace(filename, s1, s2))
		return (1);
	return (0);
}