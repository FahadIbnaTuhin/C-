#include <iostream>
#include <cstring>

// https://en.cppreference.com/w/cpp/string/byte

int main() 
{
	// 1st: std::strlen: Find the length of a string 
	// const char message1[] {"The sky is blue."};

	// // Array decays into pointer when we use const char*
	// const char* message2 {"The sky is blue."};
	// std::cout << "message1: " << message1 << std::endl;

	// // strlen ignores null character
	// std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;

	// // Includes the null character
	// std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

	// // strlen still works with decayed arrays
	// std::cout << "strlen(messsage2): " << std::strlen(message2) << std::endl;

	// // Prints size of pointer
	// std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;


	// 2nd: std::strcmp: comparing strings
	// signature: int strcmp(const char *lhs, const char *rhs);
	// Negative value if lhs appears before rhs in lexicographical(অভিধানগতভাবে) order.
	// Zero if lhs and rhs compare equal.
	// Positive value if lhs appears after rhs in lexicographical order.
	const char* string_data1 {"Alabama"};
	const char* string_data2 {"Blabama"};

	// std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << 
	// 	std::strcmp(string_data1, string_data2) << std::endl;

	// string_data1 = "Alabama";
	// string_data2 = "Alabamb";

	// std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << 
	// 	std::strcmp(string_data1, string_data2) << std::endl;		

	// string_data1 = "Alacama";
	// string_data2 = "Alabamam";

	// std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : " << 
	// 	std::strcmp(string_data1, string_data2) << std::endl;		


	// 3rd: char* strncpy( char* dest, const char* src, std::size_t count );
	// Compares n characters in the string
	// return type same like the previous one
	// std::cout << std::strncmp(string_data1, string_data2, 3) << std::endl;

	// string_data1 = "aaacma";
	// string_data2 = "aaabma";
	// std::cout << std::strcmp(string_data1, string_data2) << std::endl;
	// std::cout << std::strncmp(string_data1, string_data2, 3) << std::endl;


	// 4th: std::strchr: find first occurrence
	// const char *str {"Try not. Do, or do not. There is no try"};
	// char target = 'T';
	// const char *result = str;
	// int iteratins{};

	// while ((result = std::strchr(result, target)) != nullptr) {
	// 	std::cout << "Starting at: " << result << "\n";

	// 	// Increment result, otherwise we'll find target at the same locatin
	// 	++result;
	// 	std::cout << "Result: " << result << "\n\n"; // Using for understanding
	// 	++iteratins;
	// }
	// std::cout << "iterations : " << iteratins << std::endl;

	// const char *str {"Try not. Do, or do not. There is no try"};
	// char target = 'T';
	// const char *result = str;
	// int iteratins{};

	// while ((result = std::strchr(str, target)) != nullptr) {
	// 	std::cout << "Starting at: " << result << "\n";

	// 	// Increment result, otherwise we'll find target at the same locatin
	// 	++str;
	// 	std::cout << "Result: " << str << "\n\n"; // Using for understanding
	// 	++iteratins;
	// }
	// std::cout << "iterations : " << iteratins << std::endl;


	// 5th: Finds the last occurrence of ch (after conversion to char) in the byte string 
	// pointed to by str. The terminating null character is considered to be a part of
	//  the string and can be found if searching for '\0'.
	char input[] = "/home/user/hello.c";
    char* output = std::strrchr(input, '/');
    if (output)
        // std::cout << output << '\n'; // result: /hello.c
    	std::cout << output + 1 << '\n'; // result: hello.c



	return 0;
}