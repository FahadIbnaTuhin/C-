#include <iostream>
#include <vector>

using namespace std;

int binary_sort(vector<int> arr, int size, int target) { // you can use this int arr[], but at the time of debugging, you can't see your all arr elements using this
    int left = 0;
    int right = size - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if (target == arr[mid]) {
            return mid;
        } else if (target < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_sort(arr, size, 5);
    cout << result << endl;
   
    return 0;
}

// The warning you're seeing is because when you pass an array to a function in C++, it decays into a pointer to its first element.
// Therefore, when you use sizeof on the array parameter within the function binary_sort, you're actually getting the size of a 
// pointer (int*), not the size of the array itself.

// https://www.youtube.com/watch?v=6ysjqCUv3K4&list=PLBZBJbE_rGRV8D7XZ08LK6z-4zPoWzu5H&index=10