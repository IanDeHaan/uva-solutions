#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        char piece;
        int n, m;
        cin >> piece >> n >> m;
        if (piece == 'r' || piece == 'Q') {
            cout << min(m, n) << endl;
        } else if (piece == 'k') {
            cout << ceil((n*m)/double(2)) << endl;
        } else {
            cout << ((n/2) + (n%2))*((m/2) + (m%2)) << endl;
        }
    }
}