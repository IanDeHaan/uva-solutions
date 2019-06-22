#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        int mile = 0;
        int juice = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mile += ((x/30)+1)*10;
            juice += ((x/60)+1)*15;
        }
        cout << "Case " << cs << ": ";
        if (mile < juice) {
            cout << "Mile " << mile << endl;
        } else if (mile > juice) {
            cout << "Juice " << juice << endl;
        } else {
            cout << "Mile Juice " << mile << endl;
        }
    }
}