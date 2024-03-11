#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::setprecision(20); // Control the precision from std::cout

	// Float, double, long takes 4, 8, 12 bytes respectively. Percision of float, double, long is 7, 15 and >double respectively

	// When you write a floating-point literal without any suffix, it is interpreted as a double by default. 
	// If you want to explicitly specify that a literal should be treated as a float or long double, you can use the 'f' or 'L' suffix, respectively
	float number1 {1.12345678901234567890f};
	double number2 {1.12345678901234567890};
	long double number3 {1.12345678901234567890L};

	// std::cout << "sizeof float : " << sizeof(number1) << std::endl;
	// std::cout << "sizeof double : " << sizeof(number2) << std::endl;
	// std::cout << "sizeof long double : "  << sizeof(number3) << std::endl;

	// Percision: In C++, numbers before decimal is also count for percision
	// std::cout << "number1 is : " << number1 << std::endl; // 7 digits
	// std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
	// std::cout << "number3 is : " << number3 << std::endl; // 15+ digits

	// As float percision is 7 so if we use more than 7 without f at the end of the value, will make error
	// float number4 {1234567234};
	// std::cout << number4 << std::endl;

	// Problem not caught at compile time
	// float number4 (1234567234);
	// number4 = number4 + 1;
	// std::cout << "number4 is " << number4 << std::endl;

	// Scientific Notation
	// double number5 {192234234234};
	// double number6 {1.922340000e8};
	// double number7 {1.923e8};
	// double number8 {0.0000000000000000342};
	// double number9 {3.92e-11};

	// std::cout << "number5 is " << number5 << std::endl;
	// std::cout << "number6 is " << number6 << std::endl;
	// std::cout << "number7 is " << number7 << std::endl;
	// std::cout << "number8 is " << number8 << std::endl;
	// std::cout << "number9 is " << number9 << std::endl;

	return 0;
}
