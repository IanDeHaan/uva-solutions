#include <iostream>
using namespace std;

int main() {
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == -1) {
            break;
        }

        int up = max(a, b) - min(a, b);
        int down = min(a, b) - max(a, b) + 100;
        cout << min(up, down) << endl;
    }
}