#include <iostream>

void say_age(int& age);

int main()
{
	int age{23};
	std::cout << "age - before: " << age << " " << &age << std::endl;
	say_age(age);
	std::cout << "age - after: " << age << " " << &age << std::endl;

	return 0;
}

void say_age(int& age) { // reference is totally same address and value like the original
	++age;
	std::cout << "Hello! You are " << age << " years old. Address: " << &age << std::endl;
}