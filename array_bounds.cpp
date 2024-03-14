#include <iostream>

int main()
{
	int numbers[]  {1, 2, 3};

	// std::cout << "Location in memory where this numbers stored: " << numbers << std::endl;
	// for (int i : numbers) {
	// 	std::cout << i << std::endl;
	// }

	// Read beyond bounds: Will read garbage or crash your program
	std::cout << "numbers[12]: " << numbers[12] << std::endl; 

	// Write beyond bounds. The compiler allows it. But you don't own the memory at index 12, so 
	// other programs may modify it and your program may read bogus data at a later time. Or you can
	// even corrupt data used by other parts of your program
	numbers[129999234234234] = 1000;
	std::cout << "numbers[129999234234234]: " << numbers[129999234234234] << std::endl;

	return 0;
}