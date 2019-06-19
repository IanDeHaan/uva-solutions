#include <iostream>
#include <string>
using namespace std;

int main() {
    int cs = 0;
    while (true) {
        cs++;
        string inp;
        cin >> inp;
        if (inp == "#") {
            break;
        }

        cout << "Case " << cs << ": ";
        
        if (inp == "HELLO") {
            cout << "ENGLISH" << endl;
        } else if (inp == "HOLA") {
            cout << "SPANISH" << endl;
        } else if (inp == "HALLO") {
            cout << "GERMAN" << endl;
        } else if (inp == "BONJOUR") {
            cout << "FRENCH" << endl;
        } else if (inp == "CIAO") {
            cout << "ITALIAN" << endl;
        } else if (inp == "ZDRAVSTVUJTE") {
            cout << "RUSSIAN" << endl;
        } else {
            cout << "UNKNOWN" << endl;
        }
    }
}