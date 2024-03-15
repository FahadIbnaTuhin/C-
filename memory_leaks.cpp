#include <iostream>

int main()
{
	// When we loose access to memory that is dynammically allocated

	// 1st
	// int *p_number {new int {67}}; // Points to some address, let's call that address1 (Heap)

	// // Should delete and reset here
	// int number{55}; // lives at address2 (Stack)

	// p_number = &number; // Now p_number points to address2, but address1 is still in use by our 
	// program. But our program has lost access to that memory location. Memory has been leaked.
	// In this situation, we lost the address of 67 and os cann't use that either. Memory lost

	// 2nd - Double allocation
	// int *p_number1 {new int {55}};

	// Use the pointer
	// Should delete and reset here

	// p_number1 = new int{44}; // memory with int{55} leaked

	// 3rd
	// {
	// 	int *p_number2 {new int {57}};

	// 	// To delete the dynamic memory, you have to use these below code inside the scope, not outside
	// 	delete p_number2;
	// 	p_number2 = nullptr;
	// }
	// When this scope ends p_number2 is going to die because it is on the Stack itself
	// but the dynamic memory will not die. LEAK!

	return 0;
}