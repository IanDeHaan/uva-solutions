#include <iostream>
using namespace std;

int main() {
    int cs = 0;
    while (true) {
        int n, m, c;
        cin >> n >> m >> c;
        if (n == 0 && m == 0 && c == 0) {
            break;
        }
        cs++;
        cout << "Sequence " << cs << endl;

        int power[n];
        int on[n];
        for (int i = 0; i < n; i++) {
            on[i] = false;
            cin >> power[i];
        }
        int powerUsage = 0;
        int maxPowerUsage = 0;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            if (on[x-1]) {
                on[x-1] = false;
                powerUsage -= power[x-1];
            } else {
                on[x-1] = true;
                powerUsage += power[x-1];
            }
            maxPowerUsage = max(powerUsage, maxPowerUsage);
        }

        if (maxPowerUsage > c) {
            cout << "Fuse was blown." << endl;
        } else {
            cout << "Fuse was not blown." << endl;
            cout << "Maximal power consumption was " << maxPowerUsage << " amperes." << endl;
        }
        cout << endl;
    }
}