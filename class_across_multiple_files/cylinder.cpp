#include "cylinder.h"
#include "constrants.h" // Importing constants

Cylinder::Cylinder (double base_param, double height_param) { // This is the representation of the function we have in the header file
    base_radius = base_param;
    height = height_param;
}

double Cylinder::result() {
    return PI * base_radius * base_radius * height; // as PI needs value, we will import the PI constant here
}

double Cylinder::get_base_radius() {
    return base_radius;
}

double Cylinder::get_height() {
    return height;
}

// Setters: Used to modify the value of a private member variable in a class
void Cylinder::set_base_radius(double radius_param) {
    base_radius = radius_param;
}

void Cylinder::set_height(double height_param) {
    height = height_param;
}