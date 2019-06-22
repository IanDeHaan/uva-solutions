#include <iostream>
#include <string>
using namespace std;

int main() {
    string mp;
    int cs = 0;
    while (cin >> mp) {
        cs++;
        int n = mp.size();
        int floodfill[n];
        int index = 0;
        char mode = 'e';
        for (int i = 0; i < n; i++) {
            if (mp[i] != mode) {
                mode = mp[i];
                index++;
            }
            floodfill[i] = index;
        }
        int m;
        cin >> m;
        cout << "Case " << cs << ':' << endl;
        for (int i = 0; i < m; i++) {
            int start, end;
            cin >> start >> end;
            if (floodfill[start] == floodfill[end]) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}