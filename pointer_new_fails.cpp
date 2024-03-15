#include <iostream>

int main()
{
	// In some rare cases, the 'new' operator will fail to allocate dynamic memory from the heap. When 
	// that happens, and you have no mechanism in place to handle that failure, an exception will be 
	// thrown and your program will crash. BAD!

	// 'new' fails very rarely in practice and you'll see many programs that assume that it always works
	// don't check for memory allocation failure in any way. Depending on your application, failed memory 
	// allocatins can be very bad and you need to check and handle them

	// Simulating memory allocatin failure
	// Try to allocate a insanely huge array in one go
	// Unhandled new failure: Crash
	// int *lots_of_ints1 {new int[10000000000000000000]}; // May give an error about exceeding array size

	// Use a huge loop to try and exhaust the memory capabilities of your system. When new fails,
	// your program is going to forcefully terminate.
	// for (size_t i{}; i < 100000000000; ++i) {
	// 	int *lots_of_ints2 {new int[10000000000]};
	// }

	// 2 ways to handle this: 1/Exception mechanism 2/ std::nothrow

	// Exception mechanism 
	// Handle the problem in a way that makes sense for your application. For example, if you were
	// trying to allocate memory to store color informatin for your application, and allocation fails,
	// you could opt for showing some feedback message to the user, and rendering your app in black/white
	// for (size_t i{0}; i < 100; ++i) {
	// 	try {
	// 		int *data = new int[100000000];
	// 	} catch(std::exception& ex) {
	// 		std::cout << "Something went wrong: " << ex.what() << std::endl;
	// 	}
	// }

	// std::nothrow: ideal if you don't want exceptions thrown when new fails
	for (size_t i{}; i < 100; ++i) {
		int *data = new(std::nothrow) int[100000000];

		if (data != nullptr) {
			std::cout << "Data allocated" << std::endl;
		} else {
			std::cout << "Data allocation failed" << std::endl;
		}
	}

	return 0;
}