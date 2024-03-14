#include <iostream>

int main()
{
	// 1st Example
	int number1 {55}, number2 {60};
	bool result = (number1 < number2);
	// std::cout << std::boolalpha << "result : " << result << "\n\n";

	// std::cout << "free standing if statement" << std::endl;

	// 1st Way
	// if (result == true) {
	// 	std::cout << number1 << " is less than " << number2 << std::endl;
	// }
	// if (!(result == true)) {
	// 	std::cout << number1 << " is NOT less than " << number2 << std::endl;
	// }

	// 2nd Way
	// if (result == true) {
	// 	std::cout << number1 << " is less than " << number2 << std::endl;
	// } else {
	// 	std::cout << number1 << " is NOT less than " << number2 << std::endl;
	// }


	// 2nd Example
	bool red = false, green {true}, yellow {false}, police_stop {true};
	// if (red) {
	// 	std::cout << "Stop" << std::endl;
	// }
	// if (yellow) {
	// 	std::cout << "Slow down" << std::endl;
	// }
	// if (green) {
	// 	std::cout << "Go" << std::endl;
	// }

	// std::cout << "verbose(code tends to be more explicit)" << std::endl;
	// if (green) {
	// 	if (police_stop) {
	// 		std::cout << "Stop" << std::endl;
	// 	} else {
	// 		std::cout << "Go" << std::endl;
	// 	}
	// }

	std::cout << "less verbose(code tends to be more concise)" << std::endl;
	if (green && !police_stop) {
		std::cout << "Go" << std::endl;
	} else {
		std::cout << "Stop" << std::endl;
	}

	return 0;
}