#include <iostream>
#include <string>
using namespace std;

int main() {
    string nstr;
    getline(cin, nstr);
    int n = stoi(nstr);
    for (int i = 0; i < n; i++) {
        string things;
        getline(cin, things);
        int m = 0;
        int f = 0;
        for (char c : things) {
            if (c == 'M') {
                m++;
            } else if (c == 'F') {
                f++;
            }
        }
        if (f == m && f + m > 2) {
            cout << "LOOP" << endl;
        } else {
            cout << "NO LOOP" << endl;
        }
    }
}