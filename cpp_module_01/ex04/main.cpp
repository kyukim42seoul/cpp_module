#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "[ERR] incorrect number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream	fin(argv[1]);
	if (!fin.good())
	{
		std::cout << "[ERR] fail open filename" << std::endl;
		fin.clear();
		return (EXIT_FAILURE);
	}
	std::string		target(argv[2]);
	if (target.empty())
	{
		std::cout << "[ERR] empty target word" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		change(argv[3]);
	std::string		srcText;
	while (!fin.eof())
	{
		std::string	lineBuf;
		std::getline(fin, lineBuf);
		srcText += lineBuf;
		srcText += '\n';
	}
	fin.close();
	std::size_t location(0);
	while (srcText.find(target, location) != std::string::npos)
	{
		location = srcText.find(target, location);
		srcText = srcText.substr(0, location) + change + srcText.substr(location + target.length(), srcText.length());
		location += change.length();
	}
	std::string		replace_name(argv[1]);
	replace_name += ".replace";
	std::ofstream	fout(replace_name.c_str());
	if (!fout.good())
	{
		std::cout << "[ERR] fail fout file" << std::endl;
		fout.clear();
		return (EXIT_FAILURE);
	}
	fout << srcText;
	fout.close();
	return (EXIT_SUCCESS);
}
