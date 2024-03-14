#include <iostream>

int main() {
	// for (unsigned int i{}; i < 10; ++i) {
	// 	std::cout << "I love C++ i = " << i << std::endl;
	// }

	// size_t - Not a type, just a type alias for some unsigned int representation
	// for (size_t i{}; i < 10; ++i) {
	// 	std::cout << "I love C++ i = " << i << std::endl;
	// }

	// it sizes varies compiler to compiler, here I have 4 bytes for size_t
	// std::cout << sizeof(size_t) << std::endl;

	// for (size_t i{1}; i < 6; i++) { // i can only accessed between curly braces
	// 	std::cout << "i : " << i << ". Double that and you get " << i * 2 << std::endl;
	// }

	// To use j outside the curly braces, you have to initialize outside the for loop
	size_t j{};
	for (j; j < 6; ++j) { // can use this also -- > (; j < 6; ++j)
		std::cout << "j : " << j << ". Double that and you get " << j * 2 << std::endl;
	}
	std::cout << "Loop done the value of j is " << j << std::endl;

    return 0;
}
