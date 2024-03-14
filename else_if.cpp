#include <iostream>

const int Pen{10}, Marker{20}, Eraser{30}, Rectangle{40}, Circle{50}, Ellipse{60};

int main() 
{
	// Eraser {25}; // Return a error. In C++, you cann't change the const  value
	// std::cout << Eraser << std::endl;

	int tool {Ellipse}; // tool {60}
	// std::cout << tool << std::endl;

	if (tool == Pen) {
		std::cout << "Active tool is pen" << std::endl;
	} else if (tool == Marker) {
		std::cout << "Active tool is Marker" << std::endl;
	} else if (tool == Marker) {
		std::cout << "Active tool is Marker" << std::endl;
	} else if (tool == Eraser) {
		std::cout << "Active tool is Eraser" << std::endl;
	} else if (tool == Rectangle) {
		std::cout << "Active tool is Rectangle" << std::endl;
	} else if (tool == Circle) {
		std::cout << "Active tool is Circle" << std::endl;
	} else if (tool == Ellipse) { // tool = 60 & Ellipse = 60 as tool = Ellipse = 60
		std::cout << "Active tool is Ellipse" << std::endl;
	} else {
		std::cout << "Nothing matched" << std::endl;
	}

	return 0;
}