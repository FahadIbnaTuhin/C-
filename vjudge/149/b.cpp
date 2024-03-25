#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int price[26];
        for(int i = 0; i < 26; ++i) cin >> price[i];

        string letters = "abcdefghijklmnopqrstuvwxyz"; 
        string inp; cin >> inp;

        int cost = 0;
        for(char c: letters) {
            int count = 0;
            for(char d: inp) {
                if (c == d) {
                    ++count;
                    break;
                } 
            }
            if (count == 0) {
                int number = (static_cast<int>(c) - 97);
                cost += price[number];
            }
        }
        cout << cost << endl;
    }
    return 0;
}