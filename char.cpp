#include <iostream>

int main()
{
	char character1 {'a'};
	char character2 {'b'};
	char character3 {'c'};

	std::cout << character1 << std::endl;
	std::cout << character2 << std::endl;
	std::cout << character3 << std::endl;

	// It's possible to assign a valid ascii code to a char variable. 
	// char occupieys 1 bytes in memory: 2^8 = 256 different values (0 ~ 255)
	char value = 65;
	std::cout << "value : " << value << std::endl;
	// static_cast is used to change datatypes. we are changing value to int using <int>
	std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 

	char value5 = 98;
	std::cout << value5 << " " << static_cast<int>(value5) << std::endl;

	return 0;
}