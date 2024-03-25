#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore(); // Clear the newline character left in the input buffer

    string s1;
    string arr1[n];
    for(int i = 0; i < n; ++i) {
        getline(cin, s1);
        arr1[i] = s1;
    }

    int q; cin >> q;
    cin.ignore();

    string arr2[q];
    for(int i = 0; i < q; ++i) {
        getline(cin, s1);
        arr2[i] = s1;
    }

    int counts[q] {};
    for(int i = 0; i < q; ++i) {
        for(int j = 0; j < n; ++j) {
            if (arr2[i] == arr1[j]) {
                counts[i] += 1;
            }
        }
    }

    for(int i: counts) {
        cout << i << endl;
    }

    return 0;
}