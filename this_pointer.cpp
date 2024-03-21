#include <iostream>

class Dog {
    public:
        Dog();
        Dog(const std::string& name_param, const std::string& breed_param, int age_param);
        ~Dog();
        
        void print_info() {
            std::cout << "Dog (" << this << ") : [name: " << dog_name << ", breed: " << dog_breed << ", dog_age: " << *dog_age << "]" << std::endl;
        }
        
        // 2nd Parts setters
        // void set_name(const std::string dog_name) {
        //     // dog_name = dog_name; // Error when using the same name for both side of "="
        //     this->dog_name = dog_name; // Assigning dog_name in the member variable [debug to really understand]
        // }   
        // void set_breed(std::string dog_breed) {
        //     this->dog_breed = dog_breed;
        // }
        // void set_age(int dog_age) {
        //     *(this->dog_age) = dog_age; // this->dog_age will give you the address of dog_age and then *(this->dog_age) for accessing the value [debug then you can understand why]
        // }

        // 3rd Part - Chained calls using pointers
        // Dog* set_name(const std::string dog_name) {
        //     this->dog_name = dog_name; 
        //     return this; // this means returns the memory address of the current object
        // }   
        // Dog* set_breed(std::string dog_breed) {
        //     this->dog_breed = dog_breed;
        //     return this;
        // }
        // Dog* set_age(int dog_age) {
        //     *(this->dog_age) = dog_age;
        //     return this;
        // }
        
        // 4th Part - Chained calls using reference
        Dog& set_name(const std::string dog_name) {
            this->dog_name = dog_name; 
            return *this; // for reference, now we have to use *this
        }   
        Dog& set_breed(std::string dog_breed) {
            this->dog_breed = dog_breed;
            return *this;
        }
        Dog& set_age(int dog_age) {
            *(this->dog_age) = dog_age;
            return *this;
        }


    private:
        std::string dog_name;
        std::string dog_breed;
        int *dog_age{nullptr};
};

Dog::Dog() {
    dog_name = "None";
    dog_breed = "None";
    dog_age = new int;
    *dog_age = 0;

    std::cout << "Dog: " << dog_name << " constructed at " << this << std::endl; // this: address of the current object, for which the method is being called
}

Dog::Dog(const std::string& name_param, const std::string& breed_param, int age_param) {
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = new int; // Memory allocation
    *dog_age = age_param;
    
    std::cout << "Dog: " << dog_name << " constructed at " << this << std::endl; 
}

Dog::~Dog() {
    delete dog_age;
    std::cout << "Dog: " << dog_name << " constructed at " << this << std::endl; 
}


/*
// Chained calls using pointers - Not understood - not discussed on vscode
Dog *pdog1 = new Dog("Milou", "shepherd", 3);
p_dog1->print_info();

std::cout << std::endl;
std::cout << "After chained call: " << std::endl;

// Pointer version 
p_dog1->set_name("Mario")->set_dog_breed(" Wire Fox Terrier")->set_dog_age(5);
p_dog1->print_info();
delete p_dog1;
*/

int main() {
    // Each class member function contains a hidden pointer called this. THat pointer contains the address of the 
    // current object, for which the method is being executed. This also applies to construtors and destructor
    Dog dog1{"Kumar", "shiphard", 22};
    dog1.print_info();

    // 2nd Part
    // dog1.set_name("Ajaira");
    // dog1.set_breed("Akaj");
    // dog1.set_age(30);
    // dog1.print_info();

    // 3rd Part - Chained calls using pointers
    // dog1.set_name("Pumba")->set_breed("Jims")->set_age(20); // Do the 2nd part all things using this line
    // // dog1.set_name("Pumba")->set_breed("Jims")->set_age(20)->set_name("Khan");    
    // dog1.print_info();

    // 4th Part - Chained calls using reference
    dog1.set_breed("yamahaa").set_name("akij").set_age(50);
    dog1.print_info();


    std::cout << "Done" << std::endl;
    return 0;
    // Destructor - after the return 0, if we don't delete the dynamic memory, destructor will delete at the end of the function
    // from where you are calling the function[debug to see]
}