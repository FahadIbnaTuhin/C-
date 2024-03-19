#ifndef CLASS_ACROSS_MULTIPLE_FILES_CYLINDER_H  
#define CLASS_ACROSS_MULTIPLE_FILES_CYLINDER_H

#include "class_across_multiple_files_constrants.h" // importing constants
// error: 'const double PI' previously defined here. To solve this now we have to add
// some line in the constrants header file


class Cylinder {
public:
	// constructors
	Cylinder() = default;
	Cylinder (double base_param, double height_param) {
		base_radius = base_param;
		height = height_param;
	}

	double result() {
		return PI * base_radius * base_radius * height; // as PI needs value, we will import the PI constant here
	}


	// Getters: Used to retrieve the value of a private member variable from a class
	double get_base_radius() {
		return base_radius;
	}
	double get_height() {
		return height;
	}

	// Setters: Used to modify the value of a private member variable in a class
	void set_base_radius(double radius_param) {
		base_radius = radius_param;
	}
	void set_height(double height_param) {
		height = height_param;
	}
private: // you can define member variable at the end, but it's better to use at the top inside the class
	double base_radius {1.0};
	double height {1.0};
};

#endif