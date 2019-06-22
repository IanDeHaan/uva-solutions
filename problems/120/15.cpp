#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        cout << "Case #" << cs << ":" << endl;
        pair<string, int> items[10];
        int maxRank = -1;
        for (int i = 0; i < 10; i++) {
            cin >> items[i].first >> items[i].second;
            maxRank = max(maxRank, items[i].second);
        }
        for (int i = 0; i < 10; i++) {
            if (items[i].second == maxRank) {
                cout << items[i].first << endl;
            }
        }
    }
}