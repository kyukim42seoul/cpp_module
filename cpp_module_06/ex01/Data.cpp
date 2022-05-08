#include "Data.hpp"

const int&	Data::getNumber(void) const
{
	return (_number);
}

const std::string&	Data::getSentence(void) const
{
	return (_sentence);
}

Data::Data(void)
{
}

Data::Data(const Data& origin)
{
	(void)origin;
}

Data::Data(int number, std::string sentence)
{
	std::cout << "Data: Overloaded Constructor" << std::endl;

	_number = number;
	_sentence = sentence;
}

Data::~Data(void)
{
	std::cout << "Data: Default Destructor" << std::endl;
}

Data& Data::operator=(const Data& other)
{
	(void)other;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Data& refData)
{
	os << "Number: " << refData.getNumber() << "\nSentence: " << refData.getSentence();
	return (os);
}
