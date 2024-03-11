#include <iostream>

int main()
{
	double var2{44.55}; // Declare and initialize
	std::cout << "var2 : " << var2 << std::endl;

	var2 = 99.99; // Assign
	std::cout << "var2 : " << var2 << std::endl;

	bool state{false};
	std::cout << std::boolalpha;
	std::cout << "state : " << state << std::endl;

	state = true; // Assign
	std::cout << std::noboolalpha;
	std::cout << "state : " << state << std::endl;

	// Careful about auto assignments as this gives you garbage value and doesn't raise any error
	auto var3 {333u};
	var3 = -22; // Assign negative number. DANGER!
	std::cout << "var3 : " << var3 << std::endl;


	return 0;
}