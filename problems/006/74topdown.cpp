#include <iostream>
using namespace std;

uint64_t ways[10000][6];

int curr[5];
    

int out(int q, int top) {
    if (q == 0) {
        return 1;
    }
    if (q < 0) {
        return 0;
    }
    if (ways[q][top] == -1) {
        int o = 0;
        for (int i = 0; i < top; i++) {
            o += out(q-curr[i], i+1);
        }
        ways[q][top] = o;
    }
    return ways[q][top];
}

int main() {
    curr[0] = 1;
    curr[1] = 5;
    curr[2] = 10;
    curr[3] = 25;
    curr[4] = 50;
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < 6; j++) {
            ways[i][j] = -1;
        }
    }
    int n;
    while (cin >> n) {
        cout << out(n, 5) << endl;
    }
}