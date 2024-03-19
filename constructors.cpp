#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
	// Properties
	private: 
		double base_radius {1.0};
		double height {1.0};

	public:
		// constructors are really special kind of functions that are going to be called by the 
		// compiler to initialize your class object
		// Cylinder() { // is the object is initialized without any argument, this will work
		// 	base_radius = 2.0;
		// 	height = 2.0;
		// };

		// If you don't want to use any initialization(like the first one), then follow this: it will automatically use the public/private member variable
		Cylinder() {

		};

		// these parameters are pass by value
		// Cylinder(double radius_param, double height_param) { // will execute if the argument is match with these paramter
		// 	base_radius = radius_param;
		// 	height = height_param;
		// };

		double volume() {
			return PI * base_radius * base_radius * height;
		};
};

int main()
{
	// A special kind of method that is called when an instance of a class is created 
		// No return type
		// same name as the class 
		// Can have parameters. Can also have an empty parameter list 
		// Usually used to initialize member variables of a class

	Cylinder cylinder1;
	std::cout << "volume: " << cylinder1.volume() << std::endl;

	return 0;
}