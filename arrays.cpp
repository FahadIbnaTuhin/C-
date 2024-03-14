#include <iostream>

int main() {
	int scores[10];
	// std::cout << scores[0] << " " << scores[1] << " " << scores[9] << std::endl;

	// Writing out of bounds BAD!
	// std::cout << scores[16] << std::endl;

	// scores[0] = 20;
	// scores[1] = 21;
	// scores[2] = 22;
	// for (size_t i{0}; i < 10; ++i) { // Garbage value if not set the value for every position
	// 	std::cout << scores[i] << std::endl;
	// }

	// int scores1[10] {}; // If you initialized, then it will make all the values to 0
	// for (size_t i{}; i < 10; ++i) {
	// 	std::cout << scores1[i] << std::endl;
	// }

	// Writing data using loop
	// for (size_t i{}; i < 10; ++i) {
	// 	scores[i] = i * 2;
	// 	std::cout << scores[i] << std::endl;
	// }

	// Initialize array at declaration
	// double salaries[5] {12.7, 20.5, 15.6, 5.6, 9.623};
	// for (size_t i{}; i < 5; ++i) {
	// 	std::cout << "salaries[" << i << "]: "  << salaries[i] << std::endl;
	// }

	// You can omit elements - this will make omitted eliments to 0
	// int families[5] {12, 7, 5};
	// for (size_t i{}; i < 5; ++i) {
	// 	std::cout << "Families[" << i << "] : " << families[i] << std::endl;
	// }

	// Array Declaration: Omit size
	// int class_sizes[] {10, 12, 15, 11, 18, 17};
	// for (auto value : class_sizes) {
	// 	std::cout << "value : " << value << std::endl;
	// }

	// Constant arrays, cann't be modified. ERROR!
	// const int multipliers [] {22, 30, 15};
	// multipliers[1] = 20;

	int birds[] {10, 10};
	int sum {}; // {} saves 0 as a initializer, here sum is not an array
	for (int element : birds) {
		sum += element;
	}
	std::cout << sum << std::endl;
	


	return 0;
}