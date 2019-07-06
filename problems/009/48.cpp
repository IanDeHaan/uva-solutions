#include <iostream>
using namespace std;

int main() {
    int yeet = 50;
    int64_t fib[yeet];
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < yeet; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    int n;
    cin >> n;
    for (int cs = 0; cs < n; cs++) {
        int x;
        cin >> x;
        cout << x << " = ";
        bool printZeroes = false;
        for (int i = yeet-1; i >= 0; i--) {
            if (x >= fib[i]) {
                printZeroes = true;
                x -= fib[i];
                cout << '1';
            } else if (printZeroes) {
                cout << '0';
            }
        }
        cout << " (fib)" << endl;
    }
}