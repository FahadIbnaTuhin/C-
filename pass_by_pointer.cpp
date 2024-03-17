#include <iostream>

void say_age(int *age);

int main()
{
	int age{23};
	std::cout << "age - before: " << age << " " << &age << std::endl;
	say_age(&age); // Passing the address to the pointer
	std::cout << "age - after: " << age << " " << &age << std::endl;

	return 0;
}

void say_age(int *age) {
	++(*age); // Changing the copy through dereferencing
	std::cout << age << " " << &age << std::endl;
	std::cout << "Hello! You are " << *age << " years old" << std::endl;
}