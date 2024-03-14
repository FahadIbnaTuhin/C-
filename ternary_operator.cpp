#include <iostream>

int main()
{
	int max{}, a{35}, b{20};
	std::cout << "using regular if " << std::endl;

	if (a > b) {
		max = a;
	} else {
		max = b;
	}

	// max = (a > b) ? a : b;
	// max = (a > b) ? 5 : 10;

	// std::cout << "max : " << max << std::endl;

	// bool fast = false;
	// int speed { fast ? 300 : 150 };
	// std::cout << speed << std::endl;

	// Options need to be same type (must). Otherwise, will return error
	// max = (a < b) ? a : "HI";
	// std::cout << "max : " << max << std::endl;

	max = (a < b) ? a : 22.5f;
	std::cout << "max : " << max << std::endl;

	auto max1 = (a < b) ? a : 22.5f; // sometimes using auto works
	std::cout << "max : " << max1 << std::endl;


	return 0;
}