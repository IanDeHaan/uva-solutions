#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        uint64_t a, b;
        cin >> a >> b;
        if (a > b) {
            cout << '>' << endl;
        } else if (a < b) {
            cout << '<' << endl;
        } else {
            cout << '=' << endl;
        }
    }
}