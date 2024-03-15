#include <iostream>

int main()
{
	// Making sure you are working with pointers containing valid memory addresses

	// int *p;
	// std::cout << p << std::endl; // BAD!! adress is random bad address. Use {} or nullptr if there is no address

	int *p_number{}; // Initialized to nullptr
	// std::cout << p_number << std::endl; // address is 0, GOOD to use
	// std::cout << &p_number << std::endl;
	// std::cout << *p_number << std::endl; // Crash as it has no value. Don't use


	// verbose(details) nullptr check
	// if (p_number != nullptr) { // as p_number = 0 here
	// 	std::cout << "p_number points to a VALID address: " << p_number << std::endl;
	//	std::cout << *p_number << std::endl;
	// } else {
	// 	std::cout << "p_number points to an INVALID address." << std::endl;
	// }

	// Compact nullptr check - Better & Easy to use
	// if (p_number) {
	// 	std::cout << "p_number points to a VALID address : " << p_number << std::endl;
	// 	std::cout << *p_number << std::endl;
	// } else {
	// 	std::cout << "p_number points to an INVALID address." << std::endl;
	// }

	// Calling delete on a null pointer is OK
	// int *p_number1 {};

	// delete p_number1; // as p_number1 contains nullptr, so don't need this: p_number1 = nullptr;

	// // So no need to overdo something like this
	// if (p_number) {
	// 	delete p_number1;
	// 	p_number1 = nullptr;
	// }

	return 0;
}