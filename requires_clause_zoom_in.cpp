#include <iostream>

// Simple requirements - Expressions only checked for valid syntax
// template <typename T>
// concept TinyType = requires (T t) {
//     sizeof(T) < 4; // Only checks syntax
//     // For double paramter also, it is working because syntax is valid even if the expression here evaluates to false
// };

// TinyType auto add(TinyType auto a, TinyType auto b) {
//     return a + b;
// }


// Nested requiremnts:
template <typename T>
concept TinyType = requires (T t) {
    sizeof(T) <= 4;
    requires sizeof(T) <= 4; // Checks if the expression is True. For nested requirements, use requires keyword
};

TinyType auto add(TinyType auto a, TinyType auto b) {
    return a + b; // If you use "< 4" 2 times in upper custom concept, Error because The arithmetic operation that are we doing here are not supported
    // by types which is smaller than int. int is the smallest type you can use with the arithmetic operation. That's why use "<= 4" here.
}

// Compound requirements
// template <typename T>
// concept Addable = requires (T a, T b) {
//     // noexcept is option1
//     {a + b} noexcept -> std::convertible_to<int>; // Compound requirements
//     // Checks if a + b is valid syntax, doesn't throw exceptions(option1) and the result is convertible to int(optional)
// };



int main()
{
    // The requires clause can take in four kinds of requirements
    // Simple, Nested, Compound, Type requirements
    char x {5};
    char y {10};

    // double x {10.5};
    // double y {5.23};

    auto result = add(x, y);
    std::cout << "result: " << result << std::endl;
    std::cout << "sizeof(result): " << sizeof(result) << std::endl;


    return 0;
}