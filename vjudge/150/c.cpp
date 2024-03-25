// to confirm if the resulting matrix is a Hungarian matrix, you need to check if after applying the above operations, 
// each row and each column contains exactly one '1' and all other entries are '0. CHATGPT
// their is at least ont 0 in each row and at least 1 0 in each coulmn if so answer is "YES" else "NO". AHMED

#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;

	while(t--) {
		int n; cin >> n;
		int arr[501][501];
		int sumr = 0, sumc = 0;

		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> arr[i][j];
			}
		}

		// Checking if each row has atleast one 0, if yes, then ++sumr
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if (arr[i][j] == 0) {
					++sumr;
					break;
				}
			}
		}
		// cout << sumr << endl;

		// Checking if each column has atleast one 0, if yes, then ++sumc
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if (arr[j][i] == 0) {
					++sumc;
					break;
				}
			}
		}
		// cout << sumc << endl;

		if (sumr >= n && sumc >= n) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}