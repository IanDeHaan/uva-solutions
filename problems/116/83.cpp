#include <iostream>
using namespace std;

int main() {
    while (true) {
        int a;
        cin >> a;
        if (a == 0) {
            break;
        }
        int c;
        cin >> c;
        int prev;
        cin >> prev;
        int out = 0;
        for (int i = 1; i < c; i++) {
            int x;
            cin >> x;
            out += max(0, x-prev);
            prev = x;
        }
        out += a-prev;
        cout << out << endl;
    }
}