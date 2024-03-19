#include <iostream>
#include <concepts>
#include <string>

// template <typename T>
// concept Tinytype = requires (T t) {
// 	sizeof(T) <= 4; // simple requirements 
// 	requires sizeof(T) <= 4; // Nested requirements
// };

// template <typename T>
// // requires std::integral<T> || std::floating_point<T> // if this is integral or if it is floating point will work, but not string
// requires std::integral<T> && Tinytype<T>
// T add(T a, T b) {
// 	return a + b;
// }

// You can do same using below instead of the below 2 blocks of code. But it's better not to use this.
template <typename T>
requires std::integral<T> && requires (T t) {
	sizeof(T) <= 4;
	requires sizeof(T) <= 4;
}
T add(T a, T b) {
	return a + b;
}

int main()
{
	// Concepts can be combined with the logical operators && and ||
	int x {5};
	int y {10};

	// double x {5.55};
	// double y {10.5};

	// string x {"wood"};
	// string y {"apple"};

	add(x, y);

	return 0;
}