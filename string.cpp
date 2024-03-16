#include <iostream>


int main()
{
	std::string full_name;
	std::string planet {"Earth. Where the sky is blue"}; // Initialize with string literal
	std::string prefered_planet {planet}; // Initialize with other existing string
	std::string message {"Hello there", 5}; // Initialize with part of a string literal. Contains Hello
	std::string weird_message(4, 'e'); // Initialize with multiple copies of a char contains eeee

	std::string greeting {"Hello World"};
	std::string saying_hello {greeting, 6, 4}; 
	// Initialize with part of an existing std::string starting at index 6, taking 4 characters.
	// Will contain World.

	std::cout << "full_name: " << full_name << std::endl;
	std::cout << "planet: " << planet << std::endl;
	std::cout << "prefered_planet: " << prefered_planet << std::endl;
	std::cout << "message: " << message << std::endl;
	std::cout << "weird_message: " << weird_message << std::endl;
	std::cout << "greeting: " << greeting << std::endl;
	std::cout << "saying_hello: " << saying_hello << std::endl;

	planet = "Fucking life";
	std::cout << "planet: " << planet << std::endl;

	// use a raw array
	const char *planet1 {"Earth where the sky born"};
	planet1 = "Earth where the sky blue Earth. Where the sky is blue Earth.";
	std::cout << planet1 << std::endl;

	

	return 0;
}