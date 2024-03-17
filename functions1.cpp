#include <iostream>

// A function going to be unique based on signature. A functions signature must be unique
// Signature: Function name + Function parameters. Signature doesn't include return type

void enter_bar(size_t age); // function name and parameter together is called signature
int max(int a, int b);
void say_hello();
int lucky_number();
double increment_multiply(double a, double b);

int main() {
	// enter_bar(15); // Functions arguments
	// for (size_t i{5}; i < 15; ++i) {
	// 	enter_bar(i);
	// }

	// int result = max(20, 15);
	// int result {max(20, 25)};
	// std::cout << result << std::endl;

	// say_hello();

	// std::cout << lucky_number() << std::endl;	

	// Implicit conversions in functions
	// int maximum_number{max(20.55, 25.77)}; // implicitly converted to int. CAREFUL!
	// std::cout << maximum_number << std::endl;


	// Arguments scopes COPIES
	// double a {25.55}, b {70.87};
	// std::cout << "Outside function, before increment: " << std::endl;
	// std::cout << "a: " << a << std::endl;
	// std::cout << "b: " << b << std::endl;

	// double result = increment_multiply(a, b);

	// std::cout << "Outside function, after increment: " << std::endl;
	// std::cout << "a: " << a << std::endl;
	// std::cout << "b: " << b << std::endl;

	

    return 0;
}

// Function that takes a single parameter, and doesn't give back the result explicitly

void enter_bar(size_t age) { // Functions parameters
	if (age > 10) {
		std::cout << "You're " << age << " years old. Please proceed." << std::endl;
	} else {
		std::cout << "Sorry, you're too young for this. No offense! " << std::endl;
	}
}

// Function that takes multiple parameters and returns the result of the coputation
int max(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

void say_hello() {
	std::cout << "Hello there" << std::endl;
	return; // You could omit this return statement for functions returning void
}

int lucky_number() {
	return 99;
}

// Argument scope: COPIES
// Parameters passed this way are scoped localy in the function. Changes to them are
// not visible outside the function. What we have inside the function are actually 
// COPIES of the arguments passed to the function
double increment_multiply(double a, double b) {
	std::cout << "Inside function, before increment: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	double result = ((++a) * (++b));

	std::cout << "Inside function, after increment: " << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	return result;
}