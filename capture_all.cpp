#include <iostream>

int main()
{
	// Capturing everything by value using "=".
	// int c {42};

	// auto func = [=]() { // just the copy
	// 	std::cout << "Inner value: " << c << " " << &c << std::endl; 
	// };

	// for (size_t i{}; i < 5; ++i) {
	// 	std::cout << "Outer value: " << c << " " << &c << std::endl;
	// 	func();
	// 	++c;
	// }


	// Capturing everything by reference using "&"
	int c {42};
	double d {12.1};

	auto func = [&]() { // &c captures the address of the orginal value c, reference. Same address
		std::cout << "Inner Value c: " << c << " " << &c << std::endl;
		std::cout << "Inner Value d: " << d << " " << &d << std::endl;
	};

	for (size_t i{}; i < 5; ++i) {
		std::cout << "Outer value c: " << c << " " << &c << std::endl;
		std::cout << "Outer value d: " << d << " " << &d << std::endl;
		func();
		++c;
		d += 0.5;
	}


	return 0;
}