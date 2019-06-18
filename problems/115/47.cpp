#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        double n;
        cin >> n;
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n -= 498;
        int nInt = (int) n;
        cout << abs((nInt/10)%10) << endl; 
    }
}