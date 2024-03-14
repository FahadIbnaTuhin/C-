#include <iostream>

int main()
{
	// 3 elements and datatype is int. int takes 4 bytes. So, size 4 * 3 = 12
	int scores[] {15, 23, 32}; 
	// std::cout << sizeof(scores[1]) << std::endl;
	// std::cout << sizeof(scores) << std::endl;

	// std::size() similar with python len() [supports only after C++17]
	// std::cout << "scores size: " << std::size(scores) << std::endl;

	// for (size_t i{}; i < std::size(scores); ++i) {
	// 	std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
	// }

	// C++17 if you less version, then:
	// std::cout << (sizeof(scores) / sizeof(scores[0])) << std::endl;

	// size_t count {sizeof(scores) / sizeof(scores[0])};
	// for (size_t i{}; i < count; ++i) {
	// 	std::cout << i << std::endl;
	// }

	// But we can easily do these using this type of for loop:
	for (auto i : scores) {
		std::cout << i << std::endl;
	}

	return 0;
}