#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        int n, m;
        cin >> n >> m;
        cout << (n/3)*(m/3) << endl;
    }
}