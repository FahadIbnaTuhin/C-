#include <iostream>

// 11:05
// 14

int main() {
	int n;
	std::cin >> n;

	if (1 <= n && n <= 100) {
		if (n % 2 == 0) {
			std::cout << "YES" << std::endl;
		} else {
			std::cout << "NO" << std::endl;
		}
	}

    return 0;
}
