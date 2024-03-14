#include <iostream>

int main() {
	// while Loop
	// const size_t COUNT {6};
	// size_t i {1};
	// while (i < COUNT) {
	// 	std::cout << i << std::endl;
	// 	++i;
	// }

	//  do while - run the body then checks [best for taking input from the user]
	const size_t COUNT {6};
	size_t i {11};
	do {
		std::cout << "[" << i << "] : I love C++" << std::endl;
		++i;
	} while (i < COUNT);

    return 0;
}
