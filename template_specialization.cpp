#include <iostream>
#include <string>

template <typename T> T maximum(T a, T b);
// Template specialization
template <>
const char* maximum<const char*> (const char* a, const char* b);


int main() 
{
	int a {10}, b {23};
	double c {34.7}, d {23.4};
	std::string e {"hello"}, f {"world"};

	int max_int = maximum(a, b);
	int max_double = maximum(c, d);
	std::string max_str = maximum(e, f);

	const char* g {"wild"};
	const char* h {"animal"};
	std::cout << "max(const char*): " << maximum(g, h) << std::endl;


	return 0;
}