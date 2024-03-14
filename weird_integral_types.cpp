#include <iostream>

int main()
{
	// Integral types less than 4 bytes in size don't support arithmetic operations. 
	// Arithmetic operations are: addition, substruction, multiplication, divition, modulus

	// char takes 1 byte and short int takes 2 bytes. You can't use these for arithmetic operation. Because - 
	// This is for processor design and they decide interger is the smallest type that can support arithmetic operation[int = 4 bytes]
	// But compilers are smart enough, if you use char or short int, compiler will automatically convert these type to integer types

	short int var1 {10}, var2 {20};
	char var3 {40}, var4 {50};
	std::cout << sizeof(var1) << " " << sizeof(var2) << std::endl;
	std::cout << sizeof(var3) << " " << sizeof(var4) << std::endl;

	auto result1 = var1 + var2;
	auto result2 = var3 + var4;
	std::cout << sizeof(result1) << " " << sizeof(result2) << std::endl; // automatically int 4 bytes

	
	return 0;
}