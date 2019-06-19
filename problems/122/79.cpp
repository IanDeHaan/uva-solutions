#include <iostream>
using namespace std;

int main() {
    int cs = 0;
    while (true) {
        cs++;
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        int out = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 0) {
                out--;
            } else {
                out++;
            }
        }
        cout << "Case " << cs << ": " << out << endl;
    }
}