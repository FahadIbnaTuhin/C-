#include <iostream>

// Define a simple struct
struct Person {
    int age;
    std::string name;
};

int main() {
    // Create an instance of the struct
    Person *personPtr = new Person;

    // Access and assign values using the arrow operator
    personPtr->age = 25;
    personPtr->name = "John";

    // Print out the values
    std::cout << "Age: " << personPtr->age << std::endl;
    std::cout << "Name: " << personPtr->name << std::endl;

    // Don't forget to deallocate memory to avoid memory leaks
    delete personPtr;

    return 0;
}
