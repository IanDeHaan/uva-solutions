#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int cnt = 0;
    for (int i = 0; i < t; i++) {
        string cmd;
        cin >> cmd;
        if (cmd == "donate") {
            int x;
            cin >> x;
            cnt += x;
        } else {
            cout << cnt << endl;
        }
    }
}