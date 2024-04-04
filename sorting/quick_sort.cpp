#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int l, int r) { // l = left index, r = right index
    int pivot = arr[r];
    int i = l - 1, temp;
    for(int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            ++i;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;
    return i + 1;
}

void quick_sort(vector<int>& arr, int l, int r) {
    if (l >= r) return;

    int p = partition(arr, l, r);
    quick_sort(arr, l, p - 1);
    quick_sort(arr, p + 1, r);
}

int main() {
    // For testing only quick sort
    // vector<int> arr{-2, 3, -1, 5, 4, -3, 0};
    // cout << partition(arr, 0, 6) << endl;

    // Final
    vector<int> arr{-2, 3, -1, 5, 4, -3, 0};
    quick_sort(arr, 0, arr.size() - 1);
    for(int i: arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// https://www.youtube.com/watch?v=0SkOjNaO1XY&list=PLBZBJbE_rGRV8D7XZ08LK6z-4zPoWzu5H&index=11