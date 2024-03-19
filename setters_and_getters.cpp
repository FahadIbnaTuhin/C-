#include <iostream>

const double PI {3.141673495735};

class Cylinder {
public:
	// constructors
	Cylinder() = default;
	Cylinder (double base_param, double height_param) {
		base_radius = base_param;
		height = height_param;
	}

	double result() {
		return PI * base_radius * base_radius * height;
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

int main()
{
	// Methods to read or modify member variables of a class
	Cylinder hi(2.5, 2);
	std::cout << hi.get_base_radius() << " " << hi.get_height() << " " << hi.result() << std::endl;

	// After changing the value
	hi.set_base_radius(15);
	hi.set_height(10);
	std::cout << hi.get_base_radius() << " " << hi.get_height() << " " << hi.result() << std::endl;

	return 0;
}