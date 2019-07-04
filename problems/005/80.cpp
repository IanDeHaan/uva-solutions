#include <iostream>
using namespace std;

int main() {
    int64_t answers[31];
    answers[1] = 0;
    answers[2] = 0;
    answers[3] = 1;
    answers[4] = 3;
    for (int i = 5; i <= 30; i++) {
        answers[i] = 2*answers[i-1] + (1 << (i-4)) - answers[i-4];
    }

    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        cout << answers[n] << endl;
    }
}