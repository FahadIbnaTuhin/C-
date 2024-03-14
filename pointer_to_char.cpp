#include <iostream>

int main()
{
	char *p_char_var {};
	char char_var {'A'};

	p_char_var = &char_var;
	std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

	char char_var1 {'C'};
	p_char_var = &char_var1;
	std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

	// Pointer to char can also do something special. You can initialize with a string literal : C-String
	// char *p_message {"Hello World!"}; 
	// When you do like this, the string will be expanded to a character array and the first character 
	// of our array is going to be pointed by p_message
	// Some compiler will show error because here compiler convert the string into character array of const char. 
 	// But here we are not using const char. That's why the problem occurs. Codeblocks don't show error for this
 	
 	// We can test using const char in sublime if we want. 
	const char *p_message {"Hello World!"}; 
	std::cout << p_message << std::endl; // return: Hello World!
	std::cout << &p_message << std::endl; // return: 0x61ff04 (address)
	std::cout << *p_message << std::endl; // return: H

	// The string literal is made up of const char. Trying to modify any of them will result in a disaster!
	// *p_message = 'B';
	// std::cout << p_message << std::endl;

	// To do this, use char as follows:
	// char message[] {"Hi Bangladeh"};
	// message[3] = 'F'; // for changing char must need to use ''
	// std::cout << message << std::endl;

	return 0;
}