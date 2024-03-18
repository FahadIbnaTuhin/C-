#include <iostream>
#include <concepts>
#include <string>

// template <typename T>
// concept MyIntegral = std::is_integral_v<T>; // To make our custom concept, use concept keyword

// template <typename T> // 1st way
// requires MyIntegral<T>
// T add(T a, T b) {
//     return a + b;
// }

// template <MyIntegral T> // 2nd way
// T add(T a, T b) {
//     return a + b;
// }

// template <typename T> // 3rd way
// T add(T a, T b) requires MyIntegral<T> {
//     return a + b;
// }

// MyIntegral auto add(MyIntegral auto a, MyIntegral auto b) { // 4th way
//     return a + b;
// }

// template <typename T>
// concept Multipliable = requires(T a, T b) {
//     a * b; // Just make sure the syntax is valid. It's just checking if the parameter syntax is valid, not the value. 
// };

// template <typename T>
// requires Multipliable<T>
// T add(T a, T b) {
//     return a + b;
// }

template <typename T>
concept Incrementable = requires (T a) {
    a += 1;
    ++a;
    a++;
};

template <typename T>
requires Incrementable<T>
T add(T a, T b) {
    return a + b;
}

int main() 
{
    int x{6};
    int y{7};

    // double x {10.5};
    // double y {20.5};

    // std::string x {"Hello"};
    // std::string y {"World"}; 

    // std::cout << add(s_x, s_y) << std::endl;
    std::cout << Incrementable(x, y) << std::endl;


    return 0;
}