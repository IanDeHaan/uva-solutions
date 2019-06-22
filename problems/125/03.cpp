#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        int pos = 0;
        int n;
        cin >> n;
        int moves[n+1];
        for (int i = 1; i <= n; i++) {
            // -1 means left
            // -2 means right
            // positive means go to that cell
            string cmd;
            cin >> cmd;
            if (cmd == "LEFT") {
                pos--;
                moves[i] = -1;
            } else if (cmd == "RIGHT") {
                pos++;
                moves[i] = -2;
            } else {
                cin >> cmd;
                int x;
                cin >> x;
                moves[i] = x;
                while (moves[x] > 0) {
                    x = moves[x];
                }
                if (moves[x] == -1) {
                    pos--;
                } else {
                    pos++;
                }
            }
        }
        cout << pos << endl;
    }
}