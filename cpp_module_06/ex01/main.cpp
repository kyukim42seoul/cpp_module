#include "Data.hpp"
#include "Serialization.hpp"

/*
	reinterpret_cast 사용 시 주의점에 관한 내용도 추가하면 좋을 듯
*/

int	main()
{
	std::cout << "\n----- ----- START ----- -----\n" << std::endl;
	std::cout << "\n----- ----- Instantiation ----- -----\n" << std::endl;

	Data*			ptrData = new Data(12, "hello");
	Data*			ptrDataBuf;
	uintptr_t		serial;
	Serialization	Enigma;

	std::cout << "\n----- ----- Origin Data ----- -----\n" << std::endl;

	std::cout << *ptrData << std::endl;

	std::cout << "\n----- ----- Serialize ----- -----\n" << std::endl;

	serial = Enigma.serialize(ptrData);
	std::cout << "serial: " << serial << std::endl;

	std::cout << "\n----- ----- Deserialize && Check Data ----- -----\n" << std::endl;

	ptrDataBuf = Enigma.deserialize(serial);
	std::cout << *ptrData << std::endl;

	delete ptrDataBuf;

	std::cout << "\n----- ----- Done ----- -----\n" << std::endl;

	return (EXIT_SUCCESS);
}
