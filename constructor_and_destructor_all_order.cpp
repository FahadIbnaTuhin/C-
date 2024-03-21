#include <iostream>
#include <string_view>

class Dog {
    public: 
        Dog() = default;
        Dog(std::string_view name_param, std::string breed_param, int age_param);
        ~Dog();

    private:
        std::string name;
        std::string breed;
        int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string breed_param, int age_param) {
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    std::cout << "Dog constructor called: " << name << std::endl;
}

Dog::~Dog() {
    delete p_age;
    std::cout << "Dog destructor called(deleted): " << name << std::endl;
}

int main() {
    // The desturctors are call in reverse order 
    // The object that is called at the first will be execute at the last. Same the last will be the first
    Dog dog1("Dogg1", "Shepherd", 4); // first will execute last
    Dog dog2("Dogg2", "Shepherd", 2);
    Dog dog3("Dogg3", "Shepherd", 6);
    Dog dog4("Dogg4", "Shepherd", 3); // last will execute first



    return 0;
}