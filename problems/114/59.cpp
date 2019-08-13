#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        int a, b, c;
        cin >> a >> b >> c;
        int pos[a];
        for (int i = 0; i < a; i++) {
            pos[i] = 1;
        }
        int mv[101];
        for (int i = 0; i <= 100; i++) {
            mv[i] = i;
        }
        for (int i = 0; i < b; i++) {
            int start, end;
            cin >> start >> end;
            mv[start] = end;
        }
        int turn = 0;
        bool done = false;
        for (int i = 0; i < c; i++) {
            int roll;
            cin >> roll;
            if (done) {
                continue;
            }
            pos[turn] += roll;
            if (pos[turn] >= 100) {
                pos[turn] = 100;
                done = true;
            }
            pos[turn] = mv[pos[turn]];
            if (pos[turn] >= 100) {
                pos[turn] = 100;
                done = true;
            }

            turn++;
            turn %= a;
        }
        for (int i = 0; i < a; i++) {
            cout << "Position of player " << i+1 << " is " << pos[i] << "." << endl;
        }
    }
}