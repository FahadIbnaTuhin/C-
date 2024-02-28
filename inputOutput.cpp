#include <iostream>
#include <string>

int main6()
{
    // std::cout  -> Printing data to the console(terminal)
    // std::cin  ->  Reading data form the terminal
    // std::cerr  ->  Printing errors to the console
    // std::clog  ->  Printing log messages to the console

    // int age {24};
    // std::cout << "The age is: " << age << std::endl;

    // Error
    // std::cerr << "std::cerr output: Something went wrong" << std::endl;

    // Log Message
    //std::clog << "std:clog output: Something went wrong" << std::endl;

    /*
    int age;
    std::string name;

    std::cout << "Please type in your name " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;
    */


    /*
    // Chaining std::cin
    int age;
    std::string name;

    std::cout << "Please type in your Last name and age, separated by spaces: " << std::endl;
    std::cin >> name >> age; // Input Name and age

    std::cout << "Hello " << name << "! You're " << age << " years old" << std::endl;
    */


    /*
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hey, My name is " << name << " And My age is: " << age << std::endl;
    */



    // Reading data with spaces
    int age;
    std::string fullName;

    std::cout << "Please type in your Full Name: " << std::endl;
    std::getline(std::cin, fullName);

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << fullName << "! You're " << age << " years old." << std::endl;

    return 0;
}


