/*
	인자 : filename, string_1, string_2
	기능
		open(filename)
		copy(filename) to filename.replace
		replace all string_1 to string_2 in content
		의도치 않은 인자 / 유효하지 않은 인자에 대한 에러 처리
	금지
		std::string::replace
		유사한 기능의 c 함수(strcpy, strcmp, strcat ...)
	허용
		replace 를 제외한 std::string 멤버 함수

	해당 프로그램을 테스트하기 위한 프로그램도 같이 제출 할 것
*/

/*
	공부 할 내용
		std::string 멤버함수 기능 확인
		string << fin
		if (string == s2)
		string
*/

#include <iostream>
#include <fstream>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "[ERR] incorrect number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	std::ifstream	fin(argv[1]);
	if (fin.fail())
	{
		std::cerr << "[ERR] fail open filename" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		target(argv[2]);
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
		std::cout << "result : " << buf << std::endl;
		location++;
	}
	std::string		replace_name(argv[1]);
	std::ofstream	fout(replace_name + ".replace");
	fout << buf;
	return (EXIT_SUCCESS);
}
