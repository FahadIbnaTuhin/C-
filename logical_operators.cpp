#include <iostream>

int main()
{
	bool a {true};
	bool b {false};
	bool c {true};

	std::cout << std::boolalpha;
	std::cout << a << " & " << b << " & " << c << std::endl << std::endl;

	// AND: Evaluates to true when all operands are true
	std::cout << "a && b : " << (a && b) << std::endl;
	std::cout << "a && c : " << (a && c) << std::endl;
	std::cout << "a && b && c : " << (a && b && c) << std::endl << std::endl;

	// OR: Evaluates to true when at least one operand is true
	std::cout << "a || b : " << (a || b) << std::endl;
	std::cout << "a || c : " << (a || c) << std::endl;
	std::cout << "a || b || c : " << (a || b || c) << std::endl << std::endl;

	// NOT: Negates whatever operand you put it with.
	std::cout << "!a : " << !a << std::endl;
	std::cout << "!b : " << !b << std::endl;
	std::cout << "!c : " << !c << std::endl << std::endl;

	// Combine logical operators in expression
	std::cout << "(!(a && b) || c) : " << (!(a && b) || c) << std::endl << std::endl;


	// Logical & Relational combined in expressions
	int d{45}, e{20}, f{11};
	std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
	std::cout << "(d == e) || (e <= f) : " << ((d == e) || (e <= f)) << std::endl; // false
	std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl; // true
	std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl; // false
	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl; // true
	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl; // false
	std::cout << "(!a) && (d == e) : " << ((!a) && (d == e)) << std::endl; // 
	std::cout << "(!e) : " << (!e) << std::endl; // If e exist, it will return true
	std::cout << "(!e) && (d == e) : " << ((!e) && (d == e)) << std::endl;


	return 0;
}