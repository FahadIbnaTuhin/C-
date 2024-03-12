#include <iostream>
#include <iomanip>

int main()
{
	int pos_int {717171};
	int neg_int {-473447};
	double double_var {498.32};

	// std::dec, std::hex, std::oct will not work for floating point number
	// std::cout << "pos_int in different bases : " << std::endl;
	// std::cout << "post_int(dec) : " << std::dec << pos_int << std::endl;
	// std::cout << "post_int(hex) : " << std::hex << pos_int << std::endl;
	// std::cout << "post_int(oct) : " << std::oct << pos_int << "\n\n";

	// std::cout << "neg_int in different bases : " << std::endl;
	// std::cout << "neg_int(dec) : " << std::dec << neg_int << std::endl;
	// std::cout << "neg_int(hex) : " << std::hex << neg_int << std::endl;
	// std::cout << "neg_int(oct) : " << std::oct << neg_int << "\n\n";

	// std::cout << "double_var in different bases : " << std::endl;
	// std::cout << "double_var(dec) : " << std::dec << double_var << std::endl;
	// std::cout << "double_var(hex) : " << std::hex << double_var << std::endl;
	// std::cout << "double_var(oct) : " << std::oct << double_var << "\n\n";

	// To see the base showbase (default is noshowbase)
	// std::cout << std::showbase;
	// std::cout << std::hex << neg_int << std::endl;

	// pos_int = 717171;
	// std::cout << std::hex << pos_int << std::endl;
	// std::cout << std::uppercase << std::hex << pos_int << std::endl;
	// in the context of the std::cout stream manipulators, std::uppercase is used to affect the representation of
	// subsequent numeric values when using certain base manipulators like std::hex.

	// std::scientific - std::fixed
	double a{ 3.1423453453507394750345 }, b{ 2006.0 }, c{ 1.34e-10 };
	// std::cout << a << " " << b << " " << c << std::endl;
	// std::cout << std::fixed;
	// std::cout << a << " " << b << " " << c << std::endl; // c is 0.00000...x10^-14 that's why

	// std::cout << std::scientific << std::endl; // To get scientific value
	// std::cout << a << " " << b << " " << c << std::endl;

	// std::cout.unsetf(std::ios::scientific | std::ios::fixed);
	// std::cout << a << " " << b << " " << c << std::endl;


	// setprecision(): the number of digits printed out for a floating point. Default is 6.
	// a = 3.1408234090345;
	// std::cout << std::endl;
	// std::cout << "a (default percision(6)) : " << a << std::endl;
	// std::cout << std::setprecision(10) << a << std::endl;
	// std::cout << std::setprecision(20);
	// std::cout << a << " " << c << std::endl;


	// showpoint and noshowpoint: show trailing zeros if necessary.
	// In other way, it forces output of the decimal point
	double d{34.1}, e{101.99}, f{12.0};
	int g{45};
	std::cout << d << " " << e << " " << f << " " << g << std::endl;
	std::cout << std::showpoint;
	std::cout << d << " " << e << " " << f << " " << g << std::endl;
	
	return 0;
}