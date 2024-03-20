#ifndef CYLINDER_H  
#define CYLINDER_H

#include "constrants.h" // importing constants
// error: 'const double PI' previously defined here. To solve this now we have to add
// some line in the constrants header file


class Cylinder {
public:
	// constructors
	Cylinder() = default;
	Cylinder (double base_param, double height_param);
	double result();


	// Getters: Used to retrieve the value of a private member variable from a class
	double get_base_radius();
	double get_height();

	// Setters: Used to modify the value of a private member variable in a class
	void set_base_radius(double radius_param);
	void set_height(double height_param);
	
private: // you can define member variable at the end, but it's better to use at the top inside the class
	double base_radius {1.0};
	double height {1.0};
};

#endif