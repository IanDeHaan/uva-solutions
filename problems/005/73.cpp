#include <iostream>
using namespace std;

int main() {
    while (true) {
        double height, slideDistance, fatigue;
        double climbDistance;
        cin >> height >> climbDistance >> slideDistance >> fatigue;
        if (height == 0) {
            break;
        }
        double fatigueLoss = (double(fatigue)/100)*climbDistance;
        double pos = 0;
        int day = 0;
        while (true) {
            day++;
            pos += climbDistance;
            if (pos > height) {
                cout << "success on day " << day << endl;
                break;
            }
            climbDistance -= fatigueLoss;
            climbDistance = max(0.0, climbDistance);
            pos -= slideDistance;
            if (pos < 0) {
                cout << "failure on day " << day << endl;
                break;
            }
        }
    }
}