#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    while (true) {
        int a[3];
        int b[2];
        cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1];
        if (a[0] == 0) {
            break;
        }

        sort(a, a+3);
        sort(b, b+2);
        unordered_set<int> used;
        for (int i = 0; i < 3; i++) {
            used.insert(a[i]);
        }
        used.insert(b[0]);
        used.insert(b[1]);
        if (b[0] > a[2] && b[1] > a[2]) {
            int ind = 1;
            while (used.find(ind) != used.end()) {
                ind++;
            }
            if (ind > 52) {
                cout << -1 << endl;
            } else {
                cout << ind << endl;
            }
        }
        else if (b[0] > a[1] && b[1] > a[1]) {
            // next thing after a[1]
            int ind = a[1]+1;
            while (used.find(ind) != used.end()) {
                ind++;
            }
            if (ind > 52) {
                cout << -1 << endl;
            } else {
                cout << ind << endl;
            }
        } else if (b[1] > a[2]) {
            // next thing after a[2]
            int ind = a[2]+1;
            while (used.find(ind) != used.end()) {
                ind++;
            }
            if (ind > 52) {
                cout << -1 << endl;
            } else {
                cout << ind << endl;
            }
        } else {
            cout << -1 << endl;
        }
    }
}