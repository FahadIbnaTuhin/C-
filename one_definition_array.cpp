#include <iostream>
#include "person.h"

double add(double a, double b);

struct Point
{
	double x{};
	double y{};
};

int main() 
{
	// double result = add(5.78, 10.00);
	// std::cout << result << std::endl;

	// Point p1;
	// std::cout << p1.x << " " << p1.y << std::endl;

	Person p1("John Snow", 35);
	p1.print_info();

	return 0;
}

double add(double a, double b) {
	return (a + b);
}