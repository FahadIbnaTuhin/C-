#include <iostream>
#include <cstring>

int main() {
	// 1st
	// char dest[50] = "Hello ";
	// char src[50] = "World!";
	// std::strcat(dest, src);
	// std::cout << "dest: " << dest << std::endl;
	// std::strcat(dest, " Goodbye World!");
	// std::cout << "dest: " << dest << std::endl;
	// std::cout << "src: " << src << std::endl;


	// 2nd
	// char *dest1 = new char[30] {'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
	// char *source1 = new char[30] {',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'e', 'n', 'i', 'x', ' ', 'k', 'i', 'n', '\0'};

	// std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
	// std::cout << "std::strlen(source1): " << std::strlen(source1) << std::endl;

	// std::strcat(dest1, source1);

	// std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
	// std::cout << "dest1: " << dest1 << std::endl;


	// 3rd
	// std::strncat: concatenates n characters from src to dest
	// char dest2[50] {"Hello"};
	// char source2[50] {" There is a bird on my window."};

	// // Can use this to directly print out. This is mostly used in C++
	// std::cout << std::strncat(dest2, source2, 6) << std::endl;

	// // Or you can do std::strcat separately and print dest2
	// std::strncat(dest2, source2, 6);
	// std::cout << dest2 << std::endl;


	// 4th:
	// std::strcpy: copying strings
	// const char* source3 = "C++ is a multipurpose programming language.";
	// char *dest3 = new char[std::strlen(source3) + 1]; // adding one for null character(\0)

	// std::strcpy(dest3, source3);

	// std::cout << "sizeof(dest3): " << sizeof(dest3) << std::endl;
	// std::cout << std::strlen(source3) << " " << std::strlen(dest3) << std::endl;
	// std::cout << "dest3: " << dest3 << std::endl;

	
	// 5th:
	// std::strncpy: copy n characters from src to dest
	// signature: char *strncpy( char *dest, const char *src, std::size_t count);
	const char* source4 = "Hello";
	char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
	std::cout << "dest4: " << dest4 << std::endl;

	std::cout << "Copying..." << std::endl;
	std::strncpy(dest4, source4, 3); // will replace the first 3 character of dest4 to dest

	std::cout << "dest4: " << dest4 << std::endl;


	return 0;
}