#include <iostream>
// It is better to make the intent in your code as clear as possible by clearly using () to
// indicate which operations you want to do first
int main()
{
	// Precedence: whice operation to do first & Associativity: which direction or which order
	// https://en.cppreference.com/w/cpp/language/operator_precedence

	int a{6}, b{3}, c{8}, d{9}, e{3}, f{2}, g{5};
	int result = a + b * c - d / e - f + g; // 6 + 24 - 3 - 2 + 5
	std::cout << "result : " << result << std::endl;

	result = a / b * c + d - e + f; // 2 * 8 + 9 - 3 + 2 = 16 + 8 = 24
	std::cout << "result : " << result << std::endl;

	// To make it more strict what to do first, use parenthesis
	result = (a + b) * c - d / (e - f + g); // 9 * 8 - 9 / 6 = 72 - 3/2 = 70.5(int) = 71
	std::cout << "result : " << result << std::endl;

	return 0;
}