#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        int salaries[3];
        for (int i = 0; i < 3; i++) {
            cin >> salaries[i];
        }
        sort(salaries, salaries+3);
        cout << "Case " << cs+1 << ": " << salaries[1] << endl;
    }
}