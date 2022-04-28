#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "[ERR] incorrect number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream	fin(argv[1]);
	if (fin.fail())
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
	std::string		buf;
	while (!fin.eof())
	{
		std::string	temp;
		std::getline(fin, temp);
		buf += temp;
		buf += '\n';
	}
	std::size_t location(0);
	while (buf.find(target, location) != std::string::npos)
	{
		location = buf.find(target, location);
		buf = buf.substr(0, location) + change + buf.substr(location + target.length(), buf.length());
		location += change.length();
	}
	std::string		replace_name(argv[1]);
	replace_name += ".replace";
	std::ofstream	fout(replace_name.c_str());
	if (fout.fail())
	{
		std::cout << "[ERR] fail fout file" << std::endl;
		fout.clear();
		return (EXIT_FAILURE);
	}
	fout << buf;
	return (EXIT_SUCCESS);
}
