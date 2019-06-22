#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        int n;
        cin >> n;
        int maxSpeed = -1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            maxSpeed = max(maxSpeed, x);
        }
        cout << "Case " << cs << ": " << maxSpeed << endl;
    }
}