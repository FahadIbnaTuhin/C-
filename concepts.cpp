#include <iostream>
#include <concepts>

// An alternative to static assets and type traits
// template <typename T>
// void print_number(T n) {
// 	state_assert(std::is_integral<T>::value, "Must pass in an integral argument");
// 	std::cout << "n : " << n << std::endl;
// }


// using "requires" to specify your concept
// template <typename T>
// requires std::integral<T> // It will execute if someone call using only integral type. Integral types in C++ are data types that represent whole numbers, both signed and unsigned. These types do not include fractional parts.
// T add(T a, T b) {
// 	return a + b;
// }

// same like before but more concise
// template <std::integral T>
// T add(T a, T b) {
// 	return a + b;
// }

// // is_integral_v: An expression that can be evaluated at compile time but also results in a boolean value
// template <typename T>
// requires std::is_integral_v<T> // Using a type trait
// T add (T a, T b) {
// 	return a + b;
// }

// auto add(auto a, auto b) { // without using concepts, will work for all[double also]
// 	return a + b;
// }

// auto add(std::integral auto a, std::integral auto b) { // using concepts
// 	return a + b;
// }

template <typename T>
T add(T a, T b) requires std::integral<T> {
	return a + b;
}

// template <typename T>
// T add (T a, T b) requires std::integral<T> {
// 	return a + b;
// }

int main()
{
	// A mechanism to place constraints on your template type parameters
	// Concepts are 2 types. (1) Standard Concepts (2) Custom Concepts
	char a_0 {10};
	char a_1 {20};

	auto result_a = add(a_0, a_1);
	std::cout << "result_a: " << static_cast<int>(result_a) << std::endl;

	int b_0 {11};
	int b_1 {5};

	auto result_b = add(b_0, b_1);
	std::cout << "result_b: " << result_b << std::endl;

	// double c_0 {11.1};
	// double c_1 {1.9};
	// auto result_c = add(c_0, c_1); // Error std::integral concept not satisfied. 
	// std::cout << "result_c: " << result_c << std::endl;


	return 0;
}