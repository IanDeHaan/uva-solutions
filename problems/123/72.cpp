#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        cout << "Case " << cs << ": ";
        int l, w, h;
        cin >> l >> w >> h;
        if (l > 20 || w > 20 || h > 20) {
            cout << "bad" << endl;
        } else {
            cout << "good" << endl;
        }
    }
}