#include <iostream>

int main()
{
	// Postfix increment & decrement: ++/-- is after the value(value++/value--)
	// So, it's called Postfix. HINT: value++ reads left to right as ++ is the end
	// of the line & "right" is before "++" so, it will first print right and then increment
	// so, we cann't see the change of the value immediately, next time we will see that.
	// int value = 5;
	// std::cout << "The value is (incrementing) : " << value++ << std::endl; //5
	// std::cout << "The value is: " << value << std::endl << std::endl; // 6

	// value = 5;
	// std::cout << "The value is (decrementing) : " << value-- << std::endl; //5
	// std::cout << "The value is: " << value << std::endl << std::endl; //4


	// Prefix Increment & Decrement:
	int value = 5;
	++value;
	std::cout << "The value is (prefix++) : " << value << std::endl; // 6
	value = 5;
	std::cout << "The value is (prefix++ in place) : " << ++value << std::endl; // 6

	value = 5;
	--value;
	std::cout << "The value is (prefix--) : " << value << std::endl;
	value = 5;
	std::cout << "The value is (prefix-- in place) : " << --value << std::endl; 

	return 0;
}