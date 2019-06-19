#include <iostream>
#include <string>
using namespace std;

int main() {
    int cs = 0;
    while (true) {
        cs++;
        string inp;
        cin >> inp;
        if (inp == "*") {
            break;
        }

        cout << "Case " << cs << ": Hajj-e-";
        if (inp == "Hajj") {
            cout << "Akbar" << endl;
        } else {
            cout << "Asghar" << endl;
        }
    }
}