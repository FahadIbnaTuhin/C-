#include <iostream>

int main() {

    // At the end, you will get compile error if you don't give semicolon
    std::cout << "Hello" << std::endl;

    // WARNING: Runtime error. It will build your code and give you .exe but it will slow down and give you a RunTime Error warning
    //10/0;

    // Same Runtime error but this time using a variable
    // int value = 7 / 0;
    // std::cout << "Value: " << value << std::endl;

    return 0;

}
