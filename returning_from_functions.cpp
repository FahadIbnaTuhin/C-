#include <iostream>
#include <string>

int sum(int a, int b) {
	int result = a + b;
	std::cout << result << " " << &result << std::endl;
	return result; // Returning just the copy of the value
}

std::string add_strings(std::string str1, std::string str2) {
	std::string result = str1 + str2;
	std::cout << result << " " << &result << std::endl;
	return result;
}

int main() {
	int a{34}, b{16};

	// Getting the copy of the result value and storing the value in the new varible which 
	// address is also different
	// int result = sum(a, b);
	// std::cout << result << " " << &result << std::endl;

	// In modern copilers, return by value is commonly optimized out by the compiler when 
	// possible and the function is modified behind your back to return by reference, avoiding
	// unnecessary copies! So, you should not completely rely on return type
	std::string str_result = add_strings(std::string("Hello"), std::string(" World!"));
	std::cout << str_result << " " << &str_result << std::endl;

	// If the address are not same, they just copied, otherwise compiler used reference in the back 
	return 0;
}