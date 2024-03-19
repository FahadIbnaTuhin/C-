#include <iostream>

// Preprocessor copy the entire header file and paste it right here.
#include "class_across_multiple_files_constrants.h" // importing constants
#include "class_across_multiple_files_cylinder.h" // importing cylinder class

int main()
{
	// Methods to read or modify member variables of a class
	Cylinder hi(2.5, 2);
	std::cout << hi.get_base_radius() << " " << hi.get_height() << " " << hi.result() << std::endl;

	// After changing the value
	hi.set_base_radius(15);
	hi.set_height(10);
	std::cout << hi.get_base_radius() << " " << hi.get_height() << " " << hi.result() << std::endl;

	return 0;
}