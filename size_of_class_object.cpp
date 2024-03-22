#include <iostream>
#include <string>

class Dog {
    public: 
        Dog() = default;
        void do_something() {

        }
    
        void print_info() {

        }

    private: // The size of class object is the size of member variable only. Don't count the 
        size_t leg_count; // 8 
        size_t arm_count; // 8 
        int *age; // 8 .
};

class Wrapper {
    public:

        void do_something() {
        }
    
        void print_info() {
            std::cout << "var1: " << m_var1 << std::endl;
            std::cout << "var2: " << m_var2 << std::endl;
            std::cout << "name: " << m_name << std::endl;
        }
    private: 
        int m_var1{};
        int m_var2{};
        std::string m_name{"Lorem Ipsam"}; // string size is not same for all
};



int main() {
    Dog dog1;
    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(int*): " << sizeof(int*) << std::endl;
    // std::cout << "sizeof(Dog): " << sizeof(Dog) << std::endl; // just the sizeof the Dog class
    std::cout << "sizeof(Dog): " << sizeof(dog1) << std::endl; // same like the previous line, just here we are using dog1 which is a object

    // std::string name {"Hello World!"}; // Normally std::string means const *char
    std::string name {"I am the kind of the universe!"};
    // Both of the variable, "name" size is 32 because Here 32 is the size of the pointer but it is not the size of that thing that 
    // the pointer is pointing to. Pointers may be pointing to thousand of characters in memory.

    std::cout << "sizeof(name): " << sizeof(name) << std::endl;


    return 0;
}