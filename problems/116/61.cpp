#include <iostream>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        int lastR = -1;
        int lastD = -1;
        int minDist = 1e9;
        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if (c == 'Z') {
                minDist = 0;
            } else if (c == 'D') {
                lastD = i;
                if (lastR != -1) {
                    minDist = min(minDist, i-lastR);
                }
            } else if (c == 'R') {
                lastR = i;
                if (lastD != -1) {
                    minDist = min(minDist, i-lastD);
                }
            }
        }
        cout << minDist << endl;
    }
}