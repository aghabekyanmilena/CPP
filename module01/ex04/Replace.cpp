#include "Replace.hpp"

// int checkArgs(int argc, char **argv)
// {
// 	if (argc != 4)
// 	{
// 		std::cerr<<"Usage: ./replace <filename> <s1> <s2>"<<std::endl;
// 		return (1);
// 	}
// 	if (!argv[1][0])
// 	{
// 		std::cerr<<"File can't be empty"<<std::endl;
// 		return (1);
// 	}
// 	if (!argv[2][0])
// 	{
// 		std::cerr<<"File can't be empty"<<std::endl;
// 		return (1);
// 	}
// 	return (0);
// }

int searchandreplace(const std::string filename, const std::string s1, const std::string s2)
{
	std::ifstream infile(filename.c_str());
	std::ofstream outfile((filename + ".replace").c_str());

	if (!infile)
	{
		std::cerr<<"Can't open the file"<<std::endl;
		return (1);
	}
	if (!outfile)
	{
		std::cerr<<"Can't create the file"<<std::endl;
		return (1);
	}
	for (std::string line; std::getline(infile, line); )
	{
		std::string result;
		size_t start = 0;

		for (size_t pos = line.find(s1, start); pos != std::string::npos; pos = line.find(s1, start))
		{
			result += line.substr(start, pos - start);
			result += s2;
			start = pos + s1.length();
		}
		result += line.substr(start);
		outfile.write(result.c_str(), result.length());
		outfile.write("\n", 1);
	}

	infile.close();
	outfile.close();
	return (0);
}