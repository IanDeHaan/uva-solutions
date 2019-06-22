#include <iostream>
using namespace std;

int sumOfDigits(int x) {
    int out = 0;
    while (x > 0) {
        out += x%10;
        x /= 10;
    }
    return out;
}

int main() {
    while (true) {
        int x;
        cin >> x;
        if (x == 0) {
            break;
        }

        while (x >= 10) {
            x = sumOfDigits(x);
        }
        cout << x << endl;
    }
}