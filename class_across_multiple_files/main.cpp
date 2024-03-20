#include <iostream>

// Preprocessor copy the entire header file and paste it right here.
#include "constrants.h" // importing constants
#include "cylinder.h" // importing cylinder class

int main()
{
	// Methods to read or modify member variables of a class
	Cylinder hi(2.5, 2);
	std::cout << "volume: " << hi.result() << std::endl;

	return 0;
}