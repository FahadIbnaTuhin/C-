#include <iostream>

int main()
{
	double double_value {12.34};
	// double& ref_double_value {double_value}; // Reference to double_value
	// double *p_double_value {&double_value}; // Pointer to double_value

	// READING: As you don't need to use dereference(*), so people sometimes use reference
	// std::cout << double_value << " == " << ref_double_value << std::endl;
	// std::cout << p_double_value << " == " << *p_double_value << "\n\n";

	// // WRITING: 
	// *p_double_value = 15.44;
	// std::cout << double_value << " == " << ref_double_value << std::endl;
	// std::cout << p_double_value << " == " << *p_double_value << "\n\n";

	// ref_double_value = 18.44;
	// std::cout << double_value << " == " << ref_double_value << std::endl;
	// std::cout << p_double_value << " == " << *p_double_value << "\n\n";

	// Can't make a reference refer to something else
	// double double_value {12.35};
	// double& ref_double_value {double_value}; // Reference to double_value
	// double other_double_value {100.23};
	// std::cout << double_value << " " << ref_double_value << std::endl;
	// std::cout << &double_value << " " << &ref_double_value << std::endl;

	// This works, but it doesn't make ref_double_value reference other_double_value. It merely
	// changes the value referenced by ref_double_value to 100.23
	// Visualize this in slides
	// ref_double_value = other_double_value; // changes to ref_double_value means changing to double_value
	// std::cout << double_value << " " << ref_double_value << std::endl;
	// std::cout << &double_value << " " << &ref_double_value << std::endl;


	// If you change ref_double_value now, other_double_value stays the same proving that 
	// ref_double_value is not referencing other_double_value.
	// ref_double_value = 333.33;
	// std::cout << double_value << " " << ref_double_value << std::endl;
	// std::cout << &double_value << " " << &ref_double_value << std::endl;


	// But Can make a pointer refer to something else
	// double double_value {12.34};
	// double *p_double_value {&double_value};
	// double other_double_value {100.23};

	// p_double_value = &other_double_value;
	// std::cout << &double_value << std::endl;
	// std::cout << &other_double_value << " " << p_double_value << std::endl;
	// std::cout << other_double_value << " " << *p_double_value << std::endl;

	// *p_double_value = 355.6;
	// std::cout << other_double_value << " " << *p_double_value << std::endl;
	// std::cout << &other_double_value << " " << p_double_value << std::endl;


	// References behave like constant pointers, but they have a much friendlier systax as they
	// don't require dereferencing to read and write through referenced data
	// double *const const_p_double_value {&double_value}; // a simple const pointer that cann't point to another thing after declared

	// const_p_double_value = &other_double_value; // Error
	// So, the declaration double *const const_p_double_value {&double_value}; creates a constant pointer
	 // named const_p_double_value that points to the address of the double_value variable. Once initialized, 
	 // you cannot change const_p_double_value to point to another memory location. However, you can modify 
	 // the value of the variable it points to (i.e., double_value) through dereferencing the pointer.

	// std::cout << &double_value << " " << const_p_double_value << std::endl;
	// std::cout << double_value << " " << *const_p_double_value << std::endl;

	return 0;
}