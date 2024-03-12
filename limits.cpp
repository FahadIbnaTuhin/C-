#include <iostream>
#include <limits>

int main()
{
	// Floating point: lowest:-3.40282e+38, max:3.40282e+38, min:1.17549e-38
	// signed integer: min:-32768, max:32767
	// unsigned integer(short): min: 0, max: 65535
	std::cout << "The range for short is from " << std::numeric_limits<short>::min()
		 << " to " << std::numeric_limits<short>::max() << std::endl;

	std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min()
		 << " to " << std::numeric_limits<unsigned short>::max() << std::endl;

	std::cout << "The range for int is from " << std::numeric_limits<int>::min()
		 << " to " << std::numeric_limits<int>::max() << std::endl;

	std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min()
		 << " to " << std::numeric_limits<unsigned int>::max() << std::endl;

	std::cout << "The range for long is from " << std::numeric_limits<long>::min()
		<< " to " << std::numeric_limits<long>::max() << std::endl;
	

	std::cout << "The range for float is from " << std::numeric_limits<float>::min()
		<< " to " << std::numeric_limits<float>::max() << std::endl;

	std::cout << "The range for float(lowest) is from " << std::numeric_limits<float>::lowest()
		<< " to " << std::numeric_limits<float>::max() << std::endl;
		

	std::cout << "The range for double is from " << std::numeric_limits<double>::min()
		 << " to " << std::numeric_limits<double>::max() << std::endl;
		 
	std::cout << "The range for long double is from " << std::numeric_limits<long double>::min()
		 << " to " << std::numeric_limits<long double>::max() << std::endl;

	std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
	std::cout << "int digits : " << std::numeric_limits<int>::digits << std::endl;
	// std::numeric_limits<int>::digits represents the number of binary digits (bits) that can be 
	// represented by the specified integer type (int) without considering the sign.
	return 0;
}