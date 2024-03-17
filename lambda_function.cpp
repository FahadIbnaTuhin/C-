#include <iostream>

int main()
{
	// A mechanism to set up anonymous functions (without names). Once we have them set up,
	// we can either give them names and call them, or we can even get them to do things directly
	
	// Lambda function signature: 
	// 								[capture list] (parameters) -> return type {
	// 											Function body
	// 								}

	
	// 1st
	// [] () {
	// 	std::cout << "Hello World!" << std::endl;
	// }; // will not show as we haven't called

	// []() { // nothing inside the parameter
	// 	std::cout << "Hello World!" << std::endl;
	// }(); // call the function using (), as parameter takes none

	
	// 2nd
	// Call lambda function directly after definition
	// auto func = [] () {
	// 	std::cout << "Hello World!" << std::endl;
	// };
	// func();


	// 3rd
	// Lambda function that takes parameters
	// [](double a, double b) {
	// 	std::cout << "a + b: " << (a + b) << std::endl;
	// }(12.1, 5.7);


	// 4th 
	// auto result = [](double a, double b) {
	// 	std::cout << "(a+b): " << (a + b) << std::endl;
	// };
	// result(20.34, 30.123);
	// result(102.34, 55.32);


	// 4th
	// Lambda function that returns something
	// auto result = [](double a, double b) {
	// 	return (a + b);
	// }(12.1, 5.7);
	// std::cout << result << std::endl; 


	// 5th
	// Print result directly
	// std::cout << "result: " << [](double a, double b) {
	// 	return (a + b);
	// }(12.1, 5.7) << std::endl;


	// 6th
	// Specify return type explicityly
	auto fun1 = [] (double a, double b) -> int {
		return (a + b);
	};

	auto fun2 = [] (double a, double b) {
		return (a + b);
	};

	double a {20}, b {25};
	std::cout << fun1(a, b) << " " << fun2(a, b) << std::endl;
	std::cout << sizeof(fun1(a, b)) << " " << sizeof(fun2(a, b)) << std::endl;

	return 0;
}