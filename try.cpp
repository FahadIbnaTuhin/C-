#include <iostream>
#include <string>

int main7()
{
    std::string name;
    int age;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << "! Your age is " << age << " years old." << std::endl;

    return 0;
}
