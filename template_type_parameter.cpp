#include <iostream>

template <typename T> T maximum(T a, T b);
// template <typename T> const T& maximum(const T& a, const T& b); // Error: For template, using same function name and data type will give you error
template <typename T> const T& maximum1(const T& a, const T& b);

int main() {
	// Templates type parameters by value
	// double a {23.5}, b {51.2};

	// std::cout << "Out - &a: " << &a << std::endl;
	// double max1 = maximum(a, b);
	// std::cout << "max1: " << max1 << std::endl;


	// Template type parameters by reference 
	double a {23.5}, b {51.2};

	std::cout << "Out - &a: " << &a << std::endl;
	double max1 = maximum1(a, b);
	std::cout << "max1: " << max1 << std::endl;

	return 0;
}

template <typename T> T maximum(T a, T b) {
	std::cout << "In - &a: " << &a << std::endl;
	return (a > b) ? a : b;
}

template <typename T> const T& maximum1(const T& a, const T& b) {
	std::cout << "In - &a: " << &a << std::endl;
	return (a > b) ? a : b;
}