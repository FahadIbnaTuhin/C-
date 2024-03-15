#include <iostream>

int main()
{
	// Arrays allocated on the heap with the new operator. Can also use the std::nothrow version of new

	size_t size{10};
	// Different ways you can declare an array dynamically and how they are initialized.

	// double *p_salaries {new double [size]}; // Salaries array will contain garbage values
	
	// int *p_students {new(std::nothrow) int[size]{}}; // All the values initialized to 0

	// double *p_scores {new(std::nothrow) double[size]{1, 2, 3, 4, 5}};
	// Allocating memory space for an array of size double vars. First 5 will be initialized
	// with 1, 2, 3, 4, 5 and the rest will be 0's.

	// for (size_t i{}; i < size; ++i) {
	// 	std::cout << p_salaries[i] << " : " << *(p_salaries + i) << std::endl;
	// }
	// std::cout << std::endl;

	// for (size_t i{}; i < size; ++i) {
	// 	std::cout << p_students[i] << " : " << *(p_students + i) << std::endl;
	// }
	// std::cout << std::endl;

	// for (size_t i{}; i < size; ++i) {
	// 	std::cout << p_scores[i] << " : " << *(p_scores + i) << std::endl;
	// }

	// // To release dynamic memory
	// delete[] p_salaries;
	// p_salaries = nullptr;

	// delete[] p_students;
	// p_students = nullptr

	// delete[] p_scores;
	// p_scores = nullptr;

	// Pointers initialized with dynamic arrays are different from arrays:

	// Array works with std::size and Ranged based for loop
	// double arr[5] {10.0, 20.0, 30.0, 40.0, 50.0}; // lives on the Stack
	// std::cout << std::size(arr) << std::endl;

	// for (double i : arr) {
	// 	std::cout << i << std::endl;
	// }

	// But dynamic array doesn't work with std::size and Ranged based for loop
	double *arr {new double [5] {10.0, 20.0, 30.0, 40.0, 50.0}}; // lives on the Heap
	// std::cout << "std::size(temperatures): " << std::size(temperatures) << std::endl; // Error

	// for (double i : arr) {
	// 	std::cout << "arr : " << i << std::endl;
	// }
	// Because for dynamic array, arr not a array, it's just a pointer. That's points location in memory
	// It doesn't have any value, so how can it loop through it? That's why




	return 0;
}