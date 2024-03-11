#include <iostream>

int calculateSum(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;
    return sum;
}

int main()
{
    int firstNumber {13};
    int secondNumber {15};

    std::cout << "First Number is: " << firstNumber << std::endl;
    std::cout << "Second Number is: " << secondNumber << std::endl;

    int sum = firstNumber + secondNumber;
    std::cout << "Sum is: " << sum << std::endl;

    sum = calculateSum(10, 10);
    std::cout << "Sum is: " << sum << std::endl;

    std::cout << "Sum is: " << calculateSum(20, 20) << std::endl;

    return 0;
}
