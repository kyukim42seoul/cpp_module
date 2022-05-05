#include <iostream>
#include <string>
#include <exception>

class test
{
private:
	int	_grade;
public:
	void	testGrade(int grade)
	{
		if (grade < _grade)
			throw test::TooLowGrade();
	}
	class TooLowGrade : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return ("TooLowGrade");
		};
	};
	test(/* args */);
	~test();
};

test::test(/* args */)
{
	_grade = 50;
}

test::~test()
{
}

int	main()
{
	test	a;

	try { a.testGrade(30); }
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (EXIT_SUCCESS);
}
