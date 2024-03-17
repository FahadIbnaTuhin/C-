#include <iostream>
#include <string>

void max_str(const std::string& input1, const std::string input2, std::string& output);
void max_int(int input1, int input2, int& output);
void max_double(double input1, double input2, double* output);

int main()
{
	// Reference are preferred in C++

	// 1st
	// std::string out_str, string1("Clabama"), string2("Blabama");

	// max_str(string1, string2, out_str);
	// std::cout << out_str << std::endl;

	// 2nd
	// int out_inp, inp1{35}, inp2{30};

	// max_int(inp1, inp2, out_inp);
	// std::cout << out_inp << std::endl;

	// 3rd
	double out_inp, out_inp1{135.23}, out_inp2{78.39};

	max_double(out_inp1, out_inp2, &out_inp);
	std::cout << out_inp << std::endl;

	return 0;
}

// Using const fro input1 & input2 because we don't need to change. But want to change the
// outside scope for ouput so using reference without const
void max_str(const std::string& input1, const std::string input2, std::string& output) {
	if (input1 > input2) {
		output = input1;
	} else {
		output = input2;
	}
}

// we want to change input1, input2 and want to change the output through reference
void max_int(int input1, int input2, int& output) {
	if (input1 > input2) {
		output = input1;
	} else {
		output = input2;
	}
}

// If we want to change the outside scope using pointer.
void max_double(double input1, double input2, double* output) {
	if (input1 > input2) {
		*output = input1;
	} else {
		*output = input2;
	}
}