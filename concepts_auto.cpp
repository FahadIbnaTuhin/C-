#include <iostream>

// This syntax constrains the auto parameters you pass in to comply with the std::integral concept
std::integral auto add(std::integral auto a, std::integral auto b) { // here first word meaning the type it will return
	return a + b;
} 

int main()
{
	// add(1, 20);

	// std::integral auto x = add(10, 20); // it is same with the return type, so can hold the value
	// // std::floating_point auto x = add(10, 20); // Compiler error as the return type is not same
	// std::cout << "x: " << x << std::endl;

	// std::integral auto y = 7.7; // Error, because floating point is not integral
	// std::floating_point auto y = 7.7; // 7.7 is floating point
	// std::cout << "y: " << y << std::endl;

	// If you don't use auto in this line, you would explicitly specify the type of y. In this case, 
	// since 7.7 is a floating-point literal, you would typically use a floating-point type such as float,
	// double, or long double
	std::floating_point float y = 7.7f; // Using float
	std::floating_point double y = 7.7; // Using double
	std::floating_point long double y = 7.7L; // Using long double


	return 0;
}