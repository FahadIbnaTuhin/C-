#include <iostream>

// https://en.cppreference.com/w/cpp/string/byte

int main() 
{
	// 1st: Non-zero value if the character is an alphanumeric character, 0 otherwise.
	// std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
	// std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl; 

	// char inp_char {'*'};
	// if (std::isalnum(inp_char)) {
	// 	std::cout << "alphanumeric" << std::endl;
	// } else {
	// 	std::cout << "not alphanumeric" << std::endl;
	// }


	// 2nd: Non-zero value if the character is an alphabetic character, zero otherwise.
	// std::cout << "C is alphabetic: " << std::isalpha('C') << std::endl;
	// std::cout << "* is alphabetic: " << std::isalpha('*') << std::endl;

	// if (std::isalpha('g')) {
	// 	std::cout << "alphabetic" << std::endl;
	// } else {
	// 	std::cout << "not alphabetic" << std::endl;
	// }

	
	// 3rd: Non-zero value if the character is a blank character, zero otherwise.
	// char message[] {"Hello, My"};

	// size_t blank_count{};
	// for (size_t i{}; i < std::size(message); ++i) {
	// 	if (isblank(message[i])) {
	// 		std::cout << "Found a blank character at index [" << i << "]" << std::endl;
	// 		blank_count += 1;			
	// 	}
	// }
	// std::cout << "In total, Here is " << blank_count << " spaces in the message." << std::endl;


	// 4th: Check if character is uppercase or lowercase
	// char thought[] {"C++ Is The Best Programming Language For Competitive Programming"};
	// size_t lowercase_count {}, uppercase_count {};

	// std::cout << "Orginal String: " << thought << std::endl;

	// for (auto i : thought) {
	// 	if (std::islower(i)) {
	// 		++lowercase_count;
	// 	}
	// 	if (std::isupper(i)) {
	// 		++uppercase_count; 
	// 	}
	// }
	// std::cout << "Found " << lowercase_count << " lowercase characters and " << uppercase_count <<
	// 	" uppercase characters" << std::endl;


	// 5th: Non-zero value if the character is a numeric character, zero otherwise.
	// char message[] {"I have more than 25 books right now. Students love to read books."};
	// std::cout << message << std::endl;
	// size_t digit_count {};

	// for (auto character : message) {
	// 	if (std::isdigit(character)) {
	// 		std::cout << "Found: " << character << std::endl;
	// 		++digit_count;
	// 	}
	// }
	// std::cout << "Found " << digit_count << " in the message." << std::endl;
	

	// 6th: std::toupper() & std::tolower()
	// char orginal_string[] {"Home. The feeling of belonging"};
	// char dest_str[std::size(orginal_string)];

	// for (size_t	i{}; i < std::size(orginal_string); ++i) {
	// 	dest_str[i] = std::toupper(orginal_string[i]);
	// }
	// std::cout << "Uppercase Letter: " << dest_str << std::endl;

	// for (size_t	i{}; i < std::size(orginal_string); ++i) {
	// 	dest_str[i] = std::tolower(orginal_string[i]);
	// }
	// std::cout << "Lowercase Letter: " << dest_str << std::endl;




	return 0;
}