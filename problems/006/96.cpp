#include <iostream>
#include <math.h>
using namespace std;

int main() {
    while (true) {
        int n, m;
        cin >> n >> m;
        int ogN = n;
        int ogM = m;
        if (n == 0 && m == 0) {
            break;
        }
        if (n > m) {
            swap(n, m);
        }
        int answer;
        if (n == 1) {
            answer = m;
        } else if (n == 2) {
            answer = (m/4) * 4;
            if (m % 4 == 1) {
                answer += 2;
            } else if (m % 4 >= 2) {
                answer += 4;
            }
        }else {
            answer = ceil((n*m)/double(2));
        }
        
        cout << answer << " knights may be placed on a " << ogN << " row " << ogM << " column board." << endl;
    }
}