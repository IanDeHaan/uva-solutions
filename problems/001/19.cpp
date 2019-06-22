#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    bool first = true;
    while (cin >> n) {
        if (first) {
            first = false;
        } else {
            cout << endl;
        }
        unordered_map<string, int> bals;
        string names[n];
        for (int i = 0; i < n; i++) {
            string name;
            cin >> name;
            names[i] = name;
            bals[name] = 0;
        }
        //cout << "read in" << endl;

        for (int i = 0; i < n; i++) {
            //cout << "starting loop" << endl;
            //cout << i << endl;
            string from;
            cin >> from;
            int amount, m;
            cin >> amount >> m;
            int each;
            if (m != 0) {
                each = amount/m;
            } else {
                each = 0;
            }
            bals[from] -= each*m;
            for (int i = 0; i < m; i++) {
                string to;
                cin >> to;
                bals[to] += each;
            }
        }
        //cout << "finished calculating" << endl;


        for (int i = 0; i < n; i++) {
            cout << names[i] << ' ' << bals[names[i]] << endl;
        }


    }
}