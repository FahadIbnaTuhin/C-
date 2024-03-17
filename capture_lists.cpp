#include <iostream>

int main()
{
	// Capture lists is used to specify which variables from the surrounding scope should 
	// be accessible inside the lambda body


	// We can have access to things which are declared and defined outside our function
	// double a {10}, b {20};
	// auto func = [a, b]() {
	// 	std::cout << "(a+b): " << (a + b) << std::endl;
	// };
	// func();


	// Capturing by value: 
	// int c {42};
	// auto func = [c](){ // what we have in the lambda function is just a copy of the original
	// 	std::cout << "Inner Value: " << c << "&inner: " << &c << std::endl;
	// };
	// for (size_t i{}; i < 5; ++i) {
	// 	std::cout << "Outer Value: " << c << "&outer: " << &c << std::endl;
	// 	func();
	// 	++c;
	// }


	// Capturing by reference: 
	int c {42};
	auto func = [&c]() { // &c captures the address of the orginal value c, reference. Same address
		std::cout << "Inner Value: " << c << "&inner: " << &c << std::endl; // as "c" returns value, so it is reference
	};
	for (size_t i{}; i < 5; ++i) {
		std::cout << "Outer Value: " << c << "&outer: " << &c << std::endl;
		func();
		++c;
	}


	return 0;
}