#include <iostream>

int main()
{
    signed int value1 {10};
    signed int value2 {-300};

    std::cout << "value 1 is " << value1 << std::endl;
    std::cout << "value 2 is " << value2 << std::endl;

    std::cout << "valueof(value1) is " << sizeof(value1) << std::endl;
    std::cout << "valueof(value2) is " << sizeof(value2) << std::endl;

    unsigned int value3 {5};
    // unsigned int value4 {-200}; // Compiler Error

    return 0;
}