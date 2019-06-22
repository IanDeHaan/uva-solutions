#include <iostream>
using namespace std;

int main() {
    while (true) {
        int b, n;
        cin >> b >> n;
        if (b == 0) {
            break;
        }

        int money[b];
        for (int i = 0; i < b; i++) {
            cin >> money[i];
        }
        for (int i = 0; i < n; i++) {
            int from, to, amount;
            cin >> from >> to >> amount;
            money[from-1] -= amount;
            money[to-1] += amount;
        }
        bool good = true;
        for (int i = 0; i < b; i++) {
            if (money[i] < 0) {
                good = false;
                break;
            }
        }
        if (good) {
            cout << 'S' << endl;
        } else {
            cout << 'N' << endl;
        }
    }
}