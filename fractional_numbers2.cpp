#include <iostream>
#include <iomanip> // io-manip

int main()
{
	std::cout << std::setprecision(20);
	// n(floating point) / 0 --> Infinity (+/-)
	// 0.0/0.0 --> NaN

	double number10{ -5.6 };
	double number11{}; // Initialized to 0
	double number12{};

	double result { number10 / number11 };

	std::cout << number10 << "/" << number11 << " yields " << result << std::endl;
	std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

	result = number11 / number12;
	std::cout << number11 << "/" << number12 << " = " << result << std::endl;


	// float number4 {192400023.0f};
	// std::cout << "number4 is " << number4 << std::endl;
	// // Using double, but getting the same as before before we used f at the end of the value
	// double number5 {192400023.0f};
	// std::cout << "number5 is " << number5 << std::endl;
	// double number6 {192400023.0};
	// std::cout << "number5 is " << number6 << std::endl;
	
	// same thing happen if you use functional or assignment initialization
	// float number4 (192400023.0f);
	// float number4 = 192400023.0f;
	// std::cout << "number4 is " << number4 << std::endl;
	
	return 0;
}