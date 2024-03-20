#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int arr[n];
	for(int i = 0; i < n; ++i) {
		std::cin >> arr[i];
	}

	for(auto i : arr) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}