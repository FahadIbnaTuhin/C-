#include <iostream>
#include <cmath>

int main()
{
	// double weight { 7.4 };
	
	// std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl; // floor
	// std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl; // ceil
	// std::cout << "Weight rounded to round is : " << std::round(weight) << std::endl; // round

	// double savings { -5000 };
	// weight = 7.7;
	// std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;
	// std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;

	// exp: f(x) = e ^ x, where e = 2.71828
	// std::cout << "The exponential of 10 is : " << std::exp(10) << std::endl; // 2.71828 ^ 10 

	// pow
	// std::cout << "3 ^ 4 is : " << std::pow(3, 4) << std::endl;
	// std::cout << "9 ^ 3 is : " << std::pow(9, 3) << std::endl;

	// log: reverse function of pow. If 2^3 = 8, log 8 in base 2 = 3. Log is like asking
	// to which exponenet should we elevate 2 to get eight? Log, by default computes the log
	// in base e. There also is another function which uses base 10 called log10

	// Try the reverse operation of e^4 = 54.59, it will be log 54.59 in base e = ?
	std::cout << "Log; to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;

	// log10, 10^4 = 10000, to get 10k, you'd need to elevate 10 to the power of ?, this is log in base 10
	std::cout << "To get 1000, you'd need to elevate 10 to the power of : " << std::log10(1000) << std::endl;

	return 0;
}