#include <iostream>
#include <string>

// 1st - Class Members private by default
// class Dog {
//     std::string name {"None"};
// };

// // Struct Members public by default
// struct Cat {
//     std::string name {"Meow"};
// };

// 2nd - Override defaults
class Dog {
    public: // To make public, we can use like this
        std::string name1 {"None"};
};

struct Cat {
    public:
        Cat(const std::string& cat_name) {
            name = cat_name;
        }
    private:
        std::string name;
};

// 3rd - Most common use of struct
// struct Point {
//     double x;
//     double y;
// };
// void print_point(const Point& point) {
//     std::cout << "Point [x: " << point.x << ", y: " << point.y << "]" << std::endl;
//     std::cout << &point << std::endl;
// }

int main() {
    // Dog dog1;
    // Cat cat1;

    // 1st Part
    // dog1.name = "Fluffy"; // Error
    // cat1.name = "Fluffy";
    // std::cout << cat1.name << std::endl;

    // 2nd Part
    // Dog dog1;
    // dog1.name1 = "fluffy";
    // std::cout << dog1.name1 << std::endl;
    
    Cat cat1("Whiskey");
    // cat1.name = "Yum"; // Error as it is inside the private
    std::string f = "Fluffy";
    Cat cat2(f);
    Cat cat3(std::string("James")); // Calling the constructor with a string object

    // Creating a pointer to a dynamically allocated Cat object
    Cat *cat4 = new Cat("PowerCayt");


    // 3rd Part
    // Point point1;
    // point1.x = 25;
    // point1.y = 24.234;
    // std::cout << &point1 << std::endl;
    // print_point(point1);

    // point1.x = 2;
    // point1.y = 5;
    // std::cout << &point1 << std::endl;
    // print_point(point1);


    return 0;
}