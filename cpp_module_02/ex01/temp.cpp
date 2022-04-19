	int		temp;
	int		one = 1;

	union
    {
        float input; // assumes sizeof(float) == sizeof(int)
        int   output;
    } data;

	data.input = 42.42f;

    std::bitset<sizeof(float) * CHAR_BIT> bits(data.output);
	std::cout << "before" << std::endl;
    std::cout << bits << std::endl;
	std::cout << std::endl;

	temp = data.input * (one << 8);
	std::bitset<sizeof(int) * CHAR_BIT> bitsss(temp);
	std::cout << "int : " << bitsss << std::endl;

	float	after;
	after = temp  >> 8;
	std::cout << "during : " << after << std::endl;

	std::bitset<sizeof(float) * CHAR_BIT> bitss(after);
	std::cout << "after" << std::endl;
    std::cout << bitss << std::endl;
	std::cout << std::endl;
