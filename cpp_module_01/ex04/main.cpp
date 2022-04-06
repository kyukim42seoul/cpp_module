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
		return (EXIT_FAILURE);
	std::ifstream	fin(argv[1]);
	if (fin.fail())
	{
		std::cout << "[ERR] fail open filename" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		replace_name(argv[1]);
	replace_name += ".replace";
	std::ofstream	fout(replace_name);
	return (EXIT_SUCCESS);
}
