#include <iostream>

int main() 
{
	// A reference in C++ is an alias for an existing variable. It provides an alternative name for 
	// the same memory location as the original variable, allowing access to its value and operations.
	// The reference (fruit_apple) acts as an alias for the variable apple.
	// Both share the same address and value.
	// Modifying either the reference or the original variable affects the same memory location, 
	// preserving their address permanence.

	int int_value {45};
	double double_value {33.65};

	int& reference_to_int_value_1{int_value}; // Assign throught initialization
	int& reference_to_int_value_2 = int_value; // Assign throught assignment
	double& reference_to_double_value_1 {double_value};

	// You have to declare and initialize in one statement
	// int& some_reference; // Error


	// 1st
	std::cout << "int_value: " << int_value << std::endl;
	std::cout << "reference_to_int_value_1: " << reference_to_int_value_1 << std::endl;
	std::cout << "reference_to_int_value_2: " << reference_to_int_value_2 << "\n\n";

	std::cout << "sizeof(int): " << sizeof(int) << std::endl;
	std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
	std::cout << "sizeof(reference_to_int_value_1): " << sizeof(reference_to_int_value_1) << "\n\n";

	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "reference_to_double_value_1: " << reference_to_double_value_1 << "\n\n";

	std::cout << "&int_value: " << &int_value << std::endl;
	std::cout << "&reference_to_int_value_1: " << &reference_to_int_value_1 << std::endl;
	std::cout << "&reference_to_int_value_2: " << &reference_to_int_value_2 << "\n\n";

	std::cout << "&double_value: " << &double_value << std::endl;
	std::cout << "&reference_to_double_value_1: " << &reference_to_double_value_1 << "\n\n";

	std::cout << "sizeof(double): " << sizeof(double) << std::endl;
	std::cout << "sizeof(double&): " << sizeof(double&) << std::endl;
	std::cout << "sizeof(reference_to_double_value_1): " << sizeof(reference_to_double_value_1) << "\n\n";


	// 2nd
	int_value = 500;
	double_value = 500.55;
	std::cout << "========================================================" << std::endl;
	std::cout << "int_value: " << int_value << std::endl;
	std::cout << "reference_to_int_value_1: " << reference_to_int_value_1 << std::endl;
	std::cout << "reference_to_int_value_2: " << reference_to_int_value_2 << "\n\n";

	std::cout << "sizeof(int): " << sizeof(int) << std::endl;
	std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
	std::cout << "sizeof(reference_to_int_value_1): " << sizeof(reference_to_int_value_1) << "\n\n";

	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "reference_to_double_value_1: " << reference_to_double_value_1 << "\n\n";

	std::cout << "&int_value: " << &int_value << std::endl;
	std::cout << "&reference_to_int_value_1: " << &reference_to_int_value_1 << std::endl;
	std::cout << "&reference_to_int_value_2: " << &reference_to_int_value_2 << "\n\n";

	std::cout << "&double_value: " << &double_value << std::endl;
	std::cout << "&reference_to_double_value_1: " << &reference_to_double_value_1 << "\n\n";

	std::cout << "sizeof(double): " << sizeof(double) << std::endl;
	std::cout << "sizeof(double&): " << sizeof(double&) << std::endl;
	std::cout << "sizeof(reference_to_double_value_1): " << sizeof(reference_to_double_value_1) << "\n\n";


	// 3rd
	reference_to_int_value_1 = 1000;
	reference_to_double_value_1 = 1000.55;
	std::cout << "========================================================" << std::endl;
	std::cout << "int_value: " << int_value << std::endl;
	std::cout << "reference_to_int_value_1: " << reference_to_int_value_1 << std::endl;
	std::cout << "reference_to_int_value_2: " << reference_to_int_value_2 << "\n\n";

	std::cout << "sizeof(int): " << sizeof(int) << std::endl;
	std::cout << "sizeof(int&): " << sizeof(int&) << std::endl;
	std::cout << "sizeof(reference_to_int_value_1): " << sizeof(reference_to_int_value_1) << "\n\n";

	std::cout << "double_value: " << double_value << std::endl;
	std::cout << "reference_to_double_value_1: " << reference_to_double_value_1 << "\n\n";

	std::cout << "&int_value: " << &int_value << std::endl;
	std::cout << "&reference_to_int_value_1: " << &reference_to_int_value_1 << std::endl;
	std::cout << "&reference_to_int_value_2: " << &reference_to_int_value_2 << "\n\n";

	std::cout << "&double_value: " << &double_value << std::endl;
	std::cout << "&reference_to_double_value_1: " << &reference_to_double_value_1 << "\n\n";

	std::cout << "sizeof(double): " << sizeof(double) << std::endl;
	std::cout << "sizeof(double&): " << sizeof(double&) << std::endl;
	std::cout << "sizeof(reference_to_double_value_1): " << sizeof(reference_to_double_value_1) << "\n\n";

	return 0;
}