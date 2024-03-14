#include <iostream>

int main()
{
	// A technique that we can use to start using hip stroage that we have in the memory map of our c++
	// We can use that to get additional memory we can use and do stuff if stack memory isn't enough 
	// for additional memory

	// int *p_number{}; 
	// *p_number = 15; // for initialization {} BAD!!
	// std::cout << p_number << std::endl; // error

	// int *p_number1; // uninitialized pointer, contains junk address BAD!!
	// std::cout << p_number1 << std::endl; 

	// int apple {50};
	// int *jam{&apple}; // Good
	// std::cout  << apple << " " << *jam << " " << &jam << std::endl;

	// Lifetime through scope mechanism
	// {
	// 	int local_scope_var {33};
	// }
	
	// Allocate dynamic memory through 'new'. After this, everything will be stored in the heap
	// Initialize the pointer with dynamic memory. Dynamically allocate memory at run time and
	// make a pointer point to it.
	// int *p_number4 {nullptr};
	// p_number4 = new int;
	// // Dynamically allocate space for a single int on the heap. This memory belongs to our program
	// from now on. The system can't use it for anything else, untill we return it. After this line 
	// line executes, we will have a valid memory location allocated. The size of the allocated memory 
	// will be such that it can store the type pointed to by the pointer
	// *p_number4 = 77; // writing into dynamically allocated memory
	// std::cout << "*p_number4: " << *p_number4 << std::endl;
	// std::cout << p_number4 << " " << sizeof(p_number4) << std::endl;

	// Stack Lifetime VS Heap Lifetime
	// {
	// 	int local_var {33}; // Stack, so cann't access out of this scope
	// 	int *local_ptr_var = new int; // Heap , so can access out of this scope
	// }
	// // std::cout << local_var << std::endl;
	// std::cout << local_ptr_var << std::endl;

	// Releasing and Resetting
	// int *p_number4{nullptr};
	// p_number4 = new int;

	// *p_number4 = 12;
	// std::cout << p_number4 << std::endl; // points to the address of 12 value and another way, address of 12
	// std::cout << &p_number4 << std::endl; // address of the pointer itself
	// // std::cout << p_number4 << std::endl; prints out the value of p_number4, which is the address of the dynamically allocated integer. This address is where the integer 12 is stored after being dynamically allocated with new. This is why you see something like 0x8c6cc0 printed out.
	// // std::cout << &p_number4 << std::endl; prints out the address of the pointer p_number4 itself. This address is typically on the stack or in a register, and it represents the location where the pointer variable p_number4 is stored in memory. This is why you see something like 0x61ff08 printed out.

	// delete p_number4; // return the memory to the operating system
	// p_number4 = nullptr; // A good thing to do after you release your memory, reset it to nullptr so that the other people can know you don't have any valid data in that memory

	// Initialize with new upon pointer declaration
	// int *p_number5{new int}; // Memory location contains junk value
	int *p_number6{new int (22)}; // Use direct initialization
	// int *p_number7{new int {23}}; // Use uniform initialization

	// std::cout << "p_number5: " << p_number5 << std::endl;
	// std::cout << "*p_number5: " << *p_number5 << std::endl; // Junk Value

	std::cout << "p_number6: " << p_number6 << std::endl;
	std::cout << "*p_number6: " << *p_number6 << std::endl;
	std::cout << &p_number6 << std::endl;

	// std::cout << "p_number7: " << p_number7 << std::endl;
	// std::cout << "*p_number7: " << *p_number7 << std::endl;

	// you can also use float, double, char, bool
	// double *hi{new double {25.9347}};

	// Calling delete twice on a pointer: BAD
	// Calling delete on a pointer twice will lead to undefined behavior. Your program may be even crash. AVOID!
	p_number6 = new int{77}; // can reuse an existing pointer
	std::cout << "p_number6: " << p_number6 << std::endl; // address of 77, another way pointing 77 adress
	std::cout << "p_number6: " << &p_number6 << std::endl; // pointer location (p_number6)
	std::cout << "*p_number6: " << *p_number6 << std::endl;

	delete p_number6;
	delete p_number6;
	p_number6 = nullptr;

	// int *p_number8 = new int;
	// delete p_number8;
	// delete p_number8;
	// std::cout << "After deleting twice" << std::endl;

	p_number6 = new int{80}; // can reuse even after deleting
	std::cout << *p_number6 << std::endl;

	delete p_number6;
	p_number6 = nullptr;

	std::cout << "Program ends" << std::endl;
	return 0;
}