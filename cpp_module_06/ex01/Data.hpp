#ifndef __DATA_HPP__
#define __DATA_HPP__

#include <iostream>
#include <string>

class Data
{
private:
	int			_number;
	std::string	_sentence;
	Data(void);
	Data(const Data& origin);
	Data& operator=(const Data& other);
public:
	const int&			getNumber(void) const;
	const std::string&	getSentence(void) const;
	Data(int number, std::string sentence);
	~Data(void);
};

std::ostream&	operator<<(std::ostream& os, const Data& refData);

#endif
