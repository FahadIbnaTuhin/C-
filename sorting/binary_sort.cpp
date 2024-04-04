#include <bits/stdc++.h>
using namespace std;

int binary_sort(int arr[], int size, int target) {
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_sort(arr, size, 5);
    cout << result << endl;
   
    return 0;
}

// The warning you're seeing is because when you pass an array to a function in C++, it decays into a pointer to its first element.
// Therefore, when you use sizeof on the array parameter within the function binary_sort, you're actually getting the size of a 
// pointer (int*), not the size of the array itself.