#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "Lumberjacks:" << endl;
    for (int cs = 0; cs < n; cs++) {
        bool incr = true;
        bool decr = true;
        int prev;
        cin >> prev;
        for (int i = 1; i < 10; i++) {
            int x;
            cin >> x;
            if (x > prev) {
                decr = false;
            } else if (x < prev) {
                incr = false;
            }
            prev = x;
        }
        if (decr || incr) {
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }
}