#include <iostream>
using namespace std;

uint64_t ways[10000];

int main() {
    int curr[5];
    curr[0] = 1;
    curr[1] = 5;
    curr[2] = 10;
    curr[3] = 25;
    curr[4] = 50;
    for (int i = 0; i < 5; i++) {
        ways[curr[i]]++;
        for (int j = 1; j < 10000; j++) {
            if (ways[j] == 0) {
                continue;
            }
            int nw = j+curr[i];
            if (nw >= 10000) {
                continue;
            }

            ways[nw] += ways[j];
        }
    }
    ways[0] = 1;
    int n;
    while (cin >> n) {
        cout << ways[n] << endl;
    }
}