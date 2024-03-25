#include <iostream>
using namespace std;

int main() {
    int w, h; cin >> w >> h;
    int c_w = 60, c_h = 130;

    if (c_w <= w && c_h >= h) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}