#include <iostream>

int addNumber(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}

int main4()
{
    int firstNumber = 12;
    int secondNumber = 9;

    int sum = firstNumber + secondNumber;

    sum = addNumber(firstNumber, secondNumber);
    std::cout << "The sum of the two number is: " << sum << std::endl;

    std::cout << "The sum of the two number is: " << addNumber(15, 5) << std::endl;

    return 0;
}
