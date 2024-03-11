#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    // Example array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Element to search
    int x = 7;

    // Perform binary search
    int result = binarySearch(arr, 0, n - 1, x);

    // Check if the element is found or not
    if (result != -1)
        printf("Element %d found at index %d\n", x, result);
    else
        printf("Element %d not found in the array\n", x);

    return 0;
}
