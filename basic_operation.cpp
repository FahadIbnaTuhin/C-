#include <iostream>
#include <typeinfo>

int main()
{
	std::cout << typeid(float).name() << std::endl;

	int number1{15};
	float number2{20.456}; 


	// Addition
	float sum{number1 + number2};
	float other_sum = number1 + number2 + number1;
	std::cout << "The sum is : " << sum << std::endl;
	std::cout << "other sum is : " << other_sum << std::endl;

	// Substraction
	float diff{number1 - number2};
	float other_diff = number1 - number2 - number2;
	std::cout << "The difference is : " << diff << std::endl;
	std::cout << "Other diff is : " << other_diff << std::endl;


	// Multiplication 
	float product{number1 * number2};
	float other_product = number1 * 2 * number2;
	std::cout << "The product is : " << product << std::endl;
	std::cout << "Other product is : " << other_product << std::endl;

	// Division
	float quotient{number1 / number2};
	int other_quotient = number1 / 17; // 0.882352941 any functional part will be truncated
	std::cout << "The quotient is : " << quotient << std::endl;
	std::cout << "The other quotient is : " << other_quotient << std::endl;

	// Modulus
	float result = number1 % 4; // 15 % 4 = 3
	std::cout << "Modulus is : " << result << std::endl;


	return 0;
}