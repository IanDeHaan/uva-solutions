#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        int n;
        cin >> n;
        int h = 0;
        int l = 0;
        int pos;
        cin >> pos;
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
            if (x > pos) {
                h++;
            } else if (x < pos) {
                l++;
            }
            pos = x;
        }
        cout << "Case " << cs << ": " << h << ' ' << l << endl;
    }
}