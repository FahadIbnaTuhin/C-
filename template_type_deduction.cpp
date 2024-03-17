#include <iostream>
#include <string>

// Templates cann't work with two data type of argument
template <typename T> T maximum(T a, T b);

int main()
{
	int a {10}, b {23};
	double c {34.7}, d {23.4};
	std::string e {"hello"}, f {"world"};

	// auto max = maximum(a, b); // int type deduced
	// auto max = maximum(c, d); // double type deduced
	// auto max = maximum(e, f); // string type deduced

	// auto max = maximum<double>(c, d); // explicitly say that we want the double version called, if an instance
	// 			// is not there already, it will be created.
	// auto max = maximum<double>(a, c); // Works, even if parameters are of different types, there is implicit
				// conversion from int to double for the first parameter
	// maximum<double>(a, e); // Error: can't convert std::string to double.

	std::cout << max << std::endl;

	return 0;
}

template <typename T> T maximum(T a, T b) {
	return (a > b) ? a : b;
}