#include <iostream>
#include <typeinfo>

int main()
{
	// auto - let the compiler deduce the type.
 
	auto var1 {12}; // integers
	auto var2 {13.0}; // double
	auto var3 {14.0f}; // float
	auto var4 {15.01}; // double
	auto var5 {'e'}; // char
	auto var6 {123u}; // unsigned
	auto var7 {123ul}; // unsigned long
	auto var8 {123ll}; // long long

	std::cout << var1 << " " << sizeof(var1) << std::endl;
	std::cout << var2 << " " << sizeof(var2) << std::endl;
	std::cout << var3 << " " << sizeof(var3) << std::endl;
	std::cout << var4 << " " << sizeof(var4) << std::endl;
	std::cout << var5 << " " << sizeof(var5) << std::endl;
	std::cout << var6 << " " << sizeof(var6) << std::endl;
	std::cout << var7 << " " << sizeof(var7) << std::endl;
	std::cout << var8 << " " << sizeof(var8) << std::endl;

	std::cout << typeid(var2).name() << std::endl;

	return 0;
}