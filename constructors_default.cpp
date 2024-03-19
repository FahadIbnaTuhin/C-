#include <iostream>

const double PI {3.1416293742347293472};

class Cylinder {
private: // It's better to use member variable inside public, so that others cann't harm your class. You can tackle caught wrong things easilly
	double base_radius {1.0};
	double height {1.0};
public:
	// As the constructors are usable at the outside, they need to be inside the public, not private

	// Cylinder() = default; // Compiler will generate the default empty constructor for you.
	
	Cylinder() { // Same like the previous line of code

	}

	Cylinder(double radius_param, double height_param) {
		base_radius = radius_param;
		height = height_param;
	}
	double volume() {
		return PI * base_radius * base_radius * height;
	}
};

int main() 
{
	// constructor, the compiler won't generate the default constructor
	Cylinder hello;

	std::cout << hello.volume() << std::endl;


	return 0;
}