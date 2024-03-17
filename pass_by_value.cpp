#include <iostream>

void say_age(int age);

int main()
{
	int age{23};

	std::cout << "age - before: " << age << " " << &age << std::endl;
	say_age(age); // argument just pass the copy of the original value
	std::cout << "age - after: " << age << " " << &age << std::endl;

	return 0;
}

void say_age(int age) { // just the copy of the original value
	++age;
	std::cout << "Hello! You are " << age << " years old." << std::endl;
	std::cout << &age << std::endl;
}