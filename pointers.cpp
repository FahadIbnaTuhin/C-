#include <iostream>

int main()
{
	int *p_number {}; // will initialize with nullptr
	double *p_fractional_number {};

	int *p_number1 {nullptr}; // Explicitely initialize to nullptr
	double *p_gractional_number1 {nullptr};
	// std::cout << p_number1 << std::endl; // 0

	// std::cout << "sizeof(int): " << sizeof(int) << std::endl; // 4
	// std::cout << "sizeof(double): " << sizeof(double) << "\n\n"; // 8

	// // pointers size vary depending on windows, linux, compilers, softwares etc
	// std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
	// std::cout << "sizeof(double*): " << sizeof(double*) << "\n\n";

	// std::cout << "sizeof(p_number): " << sizeof(p_number) << std::endl;
	// std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;

	// std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;
	// std::cout << "sizeof(p_number): " << sizeof(p_number) << std::endl;

	// int* p / int * p / int *p[this is recommand to use as here is no confusion]

	// int* p {}, z{};
	// std::cout << sizeof(p) << " and " << sizeof(z) << std::endl; // Here z is only int, not pointer

	// int int_var {43};
	// int *p_int {&int_var}; // Storing the addresses of int_var in p_int
	// std::cout << int_var << " and it's address: " << &int_var << std::endl;
	// std::cout << p_int << std::endl;

	// You can also store the address stored in a pointer in any time
	// int int_var1 {65};
	// int_var1 = 126;
	// p_int = &int_var1; // assign a different address to the pointer
	// std::cout << p_int << std::endl;

	// pointers only stores the type for which it was declared
	// int *p_int1 {nullptr};
	// double double_var {33};
	// p_int1 = &double_var; // Compiler Error

	// Dereferencing a pointer: 
	int *aj {}; // will initialized with nullptr
	int apple {50};
	aj = &apple; // assign address of apple
	std::cout << *aj << std::endl; // *aj will go to the address, and reture the value of that address

	return 0;
}