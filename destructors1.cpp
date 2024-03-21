#include <iostream>
#include <string>

class Dog {
    public: 
        Dog() = default;
        //  use std::string when your function needs ownership or modification capabilities, and use std::string_view when
        //  your function only needs read-only access to the string data and does not require ownership.
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);
        ~Dog(); // Destructors always have no parameter in c++

    private:
        std::string name;
        std::string breed;
        int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param) {
    name = name_param;
    breed = breed_param;
    p_age = new int; // allocate memory on the heap
    *p_age = age_param; // put data in the new memory location
    std::cout << "Dog destructor called for: " << name << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called for(delete): " << name << std::endl;
}

void some_func() {
    Dog my_dog("Fluffy", "Shephard", 2);
}

void some_func1(Dog dog_param) {

}

void some_func2() {
    Dog* p_dog = new Dog("Fluffy", "Shephard", 20);

    // Here if you don't delete the p_dog dynamic value, the dog destructor won't called. So, use this line must
    delete p_dog; // Causes for the destructor of Dog to be called
}

int main() {
    // 1st
    // Dog my_dog("Fluffy", "Shephard", 2);

    // 2nd
    // some_func(); // We can also do this using function, when the function ends, the dynamic memory will be deleted automatically
    // Debug to see the step by step process how it is working

    // 3rd
    // BAD! Be careful.
    // This line works exactly same like the first one but don't delete the heap, as it is
    // used later on the program
    // Dog dog("Fluffy", "Shephard", 20); 
    // some_func1(dog); 
    // Then, when it is passing the dog object, the program then release that dog will not be used elsewhere. So, delete that
    // didn't happen previous line, will be occus here. But this function won't run the class again. As we are passing by value only here

    // 4th
    some_func2();


    std::cout << "DONE" << std::endl;
    return 0;
}