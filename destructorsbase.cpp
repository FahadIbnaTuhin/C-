#include <iostream>

class Dog {
    public: 
        Dog();
        Dog(std::string name_param, std::string breed_param, int age_param);
        ~Dog(); // Destructor declared using tilde character(~)
                // Can also declare and implement in here: syntax commented out below:
        /*
        ~Dog()
        {
            delete dog_age;
            std::cout << "Dog destructor called for " << dog_name << std::endl;
        }
        */
    private:
        std::string dog_name;
        std::string dog_breed;
        int *dog_age;
};

int main() {
    // Special methods that are called when an object dies. They are needed when the object needs to release some 
    // dynamic memory, or for some other kind of clean up.

    // The destructors are called in weird places that may not be obvious
        // When an object is passed by value to a function
        // When a local object is returned from a function (for some compilers)
    // Other obvious cases are:
        // When a local stack object goes out of scope(dies)
        // When a heap object is released with delete

    return 0;
}