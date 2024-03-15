#include <iostream>

int main()
{
	// x and y referencing the same memory. So, if you change one, the other will be automatically change
	
	// 1st: Non const reference
	int age {27};
	// int& ref_age {age};

	// std::cout << age << " " << ref_age << std::endl;

	// can change original varible through reference
	// ref_age++;
	// std::cout << age << " " << ref_age << std::endl;


	// 2nd: Const reference
	// age = 30;
	// const int& const_ref_age {age};
	// std::cout << age << " " << const_ref_age << std::endl;
	// const_ref_age = 31; // Error, Can't change the reference as it is const reference

	// age++; // But can change the original.
	// std::cout << age << " " << const_ref_age << std::endl;


	// 3rd: you can't use reference if the original varible use const
	// const int apple {60};
	// int& fruit {apple}; // Error


	// 4th: Duplicate const reference behavior with pointers
	// Can achieve the same thing as const ref with pointer: const pointer to const data
	// Remember that a reference by default is just like a const pointer. All we need to do is 
	// make the const pointer point to const data
	const int* const const_ptr_to_const_age{&age};
	// *const_ptr_to_const_age = 32; // Error

	// No such thing
	// const int& const weird_ref_age{age}; // Error




	return 0;
}