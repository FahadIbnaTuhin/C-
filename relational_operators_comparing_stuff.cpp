#include <iostream>

int main()
{
	int number1 {45};
	int number2 {60};

	std::cout << std::boolalpha;
	// std::cout << "number1 < number2 : " << number1 < number2 << std::endl; // always use parenthesis while comparing

	std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;

	std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
	std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
	std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
	std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
	std::cout << std::noboolalpha;
	std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

	// Store comparison result & use it later
	bool result = (number1 == number2);
	std::cout << number1 << " == " << number2 << " : " << result << std::endl;

	return 0;
}