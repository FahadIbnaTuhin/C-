#include <iostream>
#include <string>

// This is a blueprint of maximum function and compiler will use this blueprint to generate
// actual function when you call this function
// Instead of T, you can use any letter including small and uppercase letter. But T is better to use
template <typename T> // The data type that passed by the argument will be used everywhere instead of T
T maximum(T a, T b) {
	return (a > b) ? a : b;
}

int main() {
	// Function templates are just blueprints. They're not real C++ code consumed by the 
	// compiler. The compiler generated real C++ code by looking at the arguments you call
	// your function template with. The real C++ function generated by the compiler is called
	// a template instance. A template instance will be reused when a similar function call
	// (argument types) is issued. No duplicates are generated by the compiler
	// int x{5}, y{10};
	// double d_x{5.55}, d_y{10.55};
	// std::string s_x{"Apple"}, s_y{"Banana"};

	// auto result = maximum(s_x, s_y);
	// std::cout << "result: " << result << std::endl;

	// templates are not generated by the compiler. The compiler will only going to generate 
	// template instances only when it needs.

	// Function templates are just blueprints, they're not real function declaration and definition
	// Real function declarations and definitions, aka template instances are created when you call
	// the function with arguments. If the template parameters are of the same type (T, T), then
	// the arguments you call the function with must also match, otherwise you get a compiler error
	// Template instances won't always do what you want. A good example is when you call our maximum
	// function with pointers. DISASTER!
	// There are tools like cppinsights.io that can show you template instantiations. You can even use 
	// the debugger to infer that information from the activation record of a template function
	// The arguments passed to a function template must support the operations that are done in 
	// the body of the function


	// 2nd : pointers here comparing address, so be careful if you want to use pointer for template
	// int x {5}, y {7};

	// int *p_x {&x};
	// int *p_y {&y};

	// It's comparing address
	// auto result = maximum(p_x, p_y);

	// It's comparing after dereferencing
	// auto result = maximum(*p_x, *p_y);

	// std::cout << p_x << " " << p_y << " " << *p_x << " " << *p_y << std::endl;
	// std::cout << result << std::endl;

	// 3rd:
	std::cout << "Max of integers: " << max<double>(5, 6.7) << std::endl;


	return 0;
}  