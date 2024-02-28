#include <iostream>

// Typically stores 4 bytes of memory [ 1 byte = 8 bit ]

int main9()
{
    /*
    // Variable/Braced initializer
    // Variable may contain random garbage value. Warning
    int elephant_count;
    int lion_count {}; // Initializes to zero
    int dog_count {10}; // Initializes to 10
    int cat_count {15}; // Initializes to 15
    // Can use expression as initializer
    int domesticated_animals { dog_count + cat_count };

    std::cout << elephant_count << std::endl;
    std::cout << lion_count << std::endl;
    std::cout << dog_count << std::endl;
    std::cout << cat_count << std::endl;
    std::cout << domesticated_animals << std::endl;

    // Won't compile, the expression in the braces use undeclared variables
    // int bad_initialization { a + b}

    // 2.9 is of type double, with a wider range than int. Error or Warning
    // int narrowing_conversation {2.9};
    // std::cout << narrowing_conversation << std::endl;
    */



    /*
    // Functional variable initializer
    int apple (5); // Initializes to 10
    int orrange (10); // Initializes to 15
    // Can use expression as initializer
    int fruits ( apple + orrange );

    // int bad_initialization ( a + b );
    // Information lost. Less safer than braced initializer
    int narrowing_conversion_functional (2.9); // compiler error

    std::cout << apple << std::endl;
    std::cout << orrange << std::endl;
    std::cout << fruits << std::endl;
    std::cout << narrowing_conversion_functional << std::endl;
    */



    // Assignment Initialization
    int bike = 2;
    int truck = 7;
    int vehicle = bike + truck;
    int narrowing_conversion_assignment = 2.5;

    std::cout << bike << std::endl;
    std::cout << truck << std::endl;
    std::cout << vehicle << std::endl;
    std::cout << narrowing_conversion_assignment << std::endl;

    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck: " << sizeof(truck) << std::endl;


    return 0;
}
