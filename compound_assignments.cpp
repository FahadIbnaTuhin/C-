#include <iostream>

int main()
{
	int value {45};
	value += 5;
	std::cout << value << "\n\n"; // 50

	value -= 5;
	std::cout << value << std::endl << std::endl; // 50 - 5 = 45

	value *= 5;
	std::cout << value << "\n\n"; // 225

	value /= 5;
	std::cout << value << "\n\n"; // 45

	value %= 11;
	std::cout << value << "\n\n"; // 1

	return 0;
}