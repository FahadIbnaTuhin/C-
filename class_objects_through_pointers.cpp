#include <iostream>

const double PI {3.14162974329342934};

class Cylinder {
    public:
        Cylinder() = default;
        Cylinder(double base_param, double height_param) {
            base_radius = base_param;
            height = height_param;
        }
        double volumn() {
            return PI * base_radius * base_radius * height;
        }

        // Getters
        double get_base_radius() {
            return base_radius;
        }
        double get_height() {
            return height;
        }

        // Setters
        void set_get_base_radius(double radius_param) {
            base_radius = radius_param;
        }
        void set_height(double height_param) {
            height = height_param;
        }

    private:
        double base_radius {1};
        double height {1};
};

int main() {
    Cylinder cylinder1(2.5, 2.8); // Stack object
    std::cout << cylinder1.volumn() << std::endl;

    Cylinder* c2 = new Cylinder(11, 20); // Create object can heap

    // Here, c2(pointer) just stores the address of a dynamic Cylinder, It doesn't have any information, is just points to
    // std::cout << "volume c2: " << c2.volumn() << std::endl;  // Error, as pointers just points to somethings
    
    std::cout << "volume c2: " << (*c2).volumn() << std::endl; // (*) means go to the value that the pointers points and do other things
    // std::cout << "volume c2: " << c2->volumn() << std::endl; // can use directly (->) instead of (*).

    delete c2; // Remember to release memory from heap
    return 0;
}