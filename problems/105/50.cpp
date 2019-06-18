#include <iostream>
using namespace std;

int main() {
    while (true) {
        int pos, a, b, c;
        cin >> pos >> a >> b >> c;
        int degrees = 0;
        if (pos == 0 && a == 0 && b == 0 && c == 0) {
            break;
        }

        // rotate twice
        degrees += 720;

        // rotate clockwise until first number
        int diff = (pos-a)%40;
        diff += 40*(diff<0);
        degrees += diff*(360/40);
        pos = a;

        // rotate once
        degrees += 360;

        // rotate counter-clockwise until 2nd number
        diff = (b-pos)%40;
        diff += 40*(diff<0);
        degrees += diff*(360/40);
        pos = b;

        // turn clockwise unil 3rd number
        diff = (pos-c)%40;
        diff += 40*(diff<0);
        degrees += diff*(360/40);
        pos = c;

        cout << degrees << endl;
    }
}