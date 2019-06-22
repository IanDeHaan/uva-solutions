#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        if (cs != 0) {
            cout << endl;
        }

        int n;
        cin >> n;
        int diff = -1;
        bool good = true;
        for (int i = 0; i < n; i++) {
            int top, bot;
            cin >> top >> bot;
            if (diff == -1) {
                diff = top-bot;
            } else if (diff != top-bot) {
                good = false;
            }
        }
        if (good) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}