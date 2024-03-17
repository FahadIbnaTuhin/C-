#include <iostream>
#include <string>

// Function overloading is a mechanism in c++ to have multiple copies of the same function
// but taking different parameters
int max(int a, int b);
int max(double a, double b);
int max(int a, double b);
int max(double a, double b, int c);
std::string max(std::string a, std::string b);

int main() {
	// Using overloading, you can pass any type of argument and it will choose the right
	// function that support the exact same data type of your argument

	// Parameter differences: 1. Order, 2. Number, 3. Types

	int int_value1 {41}, int_value2 {29};
	double double_value1 {47.2}, double_value2 {99.23};
	std::string first {"Hello"}, second {"World"};

	std::cout << "max (" << int_value1 << ", " << int_value2 << ") : "  << 
		max(int_value1, int_value2) << std::endl;

	std::cout << "max (" << 5 << ", " << 7 << ") : "  << 
		max(5, 7) << std::endl;

	std::cout << "max (" << double_value1 << ", " << double_value2 << ") : "  << 
		max(double_value1, double_value2) << std::endl;

	std::cout << "max (" << first << ", " << second << ") : "  << 
		max(first, second) << std::endl;

	std::cout << "max (dog, cat) : "  << max("dog", "cat") << std::endl;

	auto result = max(double_value1, double_value2, int_value2);
	std::cout << result << std::endl;

	// While overloading, you should keep a eye so that the parameters are different anyhow

	return 0;
}

int max(int a, int b) {
	std::cout << "(int, int)" << std::endl;
	return (a > b) ? a : b;
}

// Can't overload on the return type. Compiler error
// double max(int a, int b) { // signature must needs to be different
// 	std::cout << "(int, int)" << std::endl;
// 	return (a > b) ? a : b;
// }

// Just need to unique the signature, not the return type. Below will take doubles and returns double to int format
int max(double a, double b) { 
	std::cout << "(double, double)" << std::endl;
	return (a > b) ? a : b;
}

int max(int a, double b) { // can also use like this
	std::cout << "(int, double)" << std::endl;
	return (a > b) ? a : b;
}

int max(double a, double b, int c) { 
	std::cout << "(double, double, int)" << std::endl;
	return (a > b) ? a : b;
}

std::string max(std::string a, std::string b) {
	std::cout << "(string, string)" << std::endl;
	return (a > b) ? a : b;
}

