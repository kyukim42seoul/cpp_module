#include <iostream>

class example
{
	private:
		int		a;
		int		b;
		void	print_hello();
	public:
		example()
		{
			a = 5;
			b = 10;
		}
		void	call_print_hello();
		void	show();
};

void	example::print_hello()
{
	std::cout << "hello" << std::endl;
}

void	example::call_print_hello()
{
	print_hello();
}

void	example::show()
{
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

int	main()
{
	example	exam_object;

	exam_object.call_print_hello();
	exam_object.show();
	
	return (EXIT_SUCCESS);
}