#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- MutantStack ----- -----\n" << std::endl;

	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << "\n----- ----- List ----- -----\n" << std::endl;

	std::list<int>	oList;

	oList.push_back(5);
	oList.push_back(17);

	std::cout << oList.back() << std::endl;

	oList.pop_back();

	std::cout << oList.size() << std::endl;

	oList.push_back(3);
	oList.push_back(5);
	oList.push_back(737);
	//[...]
	oList.push_back(0);

	std::list<int>::iterator itList = oList.begin();
	std::list<int>::iterator iteList = oList.end();

	++itList;
	--itList;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl;
		++itList;
	}

	std::list<int> sL(oList);

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return 0;
}
