#include <iostream>
// Booleans occupy 8 bits in memory, an entire byte.
// A byte can store 256 values. How? because it consists of 8 bits, and each bit can be
// either 0 or 1. The total number of possible combinations of 8 bits is 2^8, which is 256.
int main()
{

	// sizeof(bool)
	std::cout << "Bool takes: " << sizeof(bool) << " bytes." << std::endl;
	std::cout << std::endl; // Used for giving a blank line

	bool red_light{true};
	bool green_light{false};

	if (red_light == true) {
		std::cout << "Stop!" << std::endl;
	} else {
		std::cout << "Go through!" << std::endl;
	}

	if (green_light) {
		std::cout << "The light is green!" << std::endl;
	} else {
		std::cout << "The light is NOT green!" << std::endl;
	}

	// Printing out a bool. 1 means true while 0 means false
	std::cout << std::endl;
	std::cout << "red_light : " << red_light << std::endl;
	std::cout << "green_light : " << green_light << std::endl;

	// Print out true and false
	std::cout << std::endl;
	std::cout << std::boolalpha; // Forces the output format to true/false
	std::cout << "red_light : " << red_light << std::endl;
	std::cout << "green_light : " << green_light << std::endl;
}