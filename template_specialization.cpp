#include <iostream>
#include <string>
#include <cstring>

template <typename T> T maximum(T a, T b) {
	return (a > b) ? a : b;
}
// Template specialization
template <>
const char* maximum<const char*> (const char* a, const char* b) {
	return (std::strcmp(a, b) > 0) ? a : b; // for strcmp - import cstring
	// strcmp return 1 if the the rhs is higher than lhs
}


int main() 
{
	int a {10}, b {23};
	double c {34.7}, d {23.4};
	std::string e {"hello"}, f {"world"};

	auto max_int = maximum(a, b);
	auto max_double = maximum(c, d);
	auto max_str = maximum(e, f);

	// std::cout << max_int << std::endl;
	// std::cout << max_double << std::endl;
	// std::cout << max_str << std::endl;

	const char* g {"wild"};
	const char* h {"animal"};
	std::cout << "max(const char*): " << maximum(g, h) << std::endl; 
	// above line will compare the address of g & h

	return 0;
}