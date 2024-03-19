#include <iostream>

const double PI {3.1415926535897932384626433832795}; // using calculate to copy the pi :)

// here we have two properties that defines cylinder. Inside class, public, private is suppose
// member. And if the member is private, then you cann't use that outside the class. But public is usable
// Everything after the public will be accessible outside of the class until you are using private
class Cylinder { // Member of the class are private by default
	public: // 1st Property - memeber variables. 
		double base_radius {1.0};
		double height {1.0};

	public: // 2nd Property - behaviour or functions that do things using the properties
		double volume() { // calls method
			return PI * base_radius * base_radius * height; // V = pi * r^2 * height
		}

	// Member variable
	// double hi{54.232}; // for this line: Everything after the public will be accessible outside of the class until you are using private. But for public, it's better to make this inside public
}; // R: semicolon at the end of the class

int main()
{
	// To build our own type and use them like we have been using other builit-in types
	// like int, double or whatever we want. We can do this by setting up blueprints 
	// unsigned int age {44};
	// double score {55.9};

	// Using class instances(objects)
	Cylinder cylinder1; // here creating objects
	std::cout << "volume c1: " << cylinder1.volume() << std::endl;

	cylinder1.base_radius = 3.0;
	cylinder1.height = 2;
	std::cout << "volumn c1: " << cylinder1.volume() << std::endl;

	cylinder1.height = 10;
	std::cout << "volumn c1(change): " << cylinder1.volume() << std::endl;

	Cylinder cylinder2;
	std::cout << "volume c2: " << cylinder2.volume() << std::endl;
	// std::cout << cylinder2.hi << std::endl;

	// Class memeber variables can either be raw stack variables or pointers but can't be reference
	// Classes have functions (methods) that let them do things
	// Class methods have access to the member variables, regardless of whether they are public or private
	// Private members of classes (variables and functions) aren't accessible from the oustide of the class definition
	
	return 0;
}