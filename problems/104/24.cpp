#include <iostream>
#include <iomanip>
using namespace std;

int sumOfDigits(int x) {
    int out = 0;
    while (x > 0) {
        out += x%10;
        x /= 10;
    }
    return out;
}

int main() {
    string a;
    while (!cin.eof()) {
        getline(cin, a);
        string b;
        getline(cin, b);
        int sumA = 0;
        int sumB = 0;
        for (char c : a) {
            if ('a' <= c && c <= 'z') {
                sumA += c - 'a' + 1;
            } else if ('A' <= c && c <= 'Z') {
                sumA += c - 'A' + 1;
            }
        }
        for (char c : b) {
            if ('a' <= c && c <= 'z') {
                sumB += c - 'a' + 1;
            } else if ('A' <= c && c <= 'Z') {
                sumB += c - 'A' + 1;
            }
        }
        while (sumA >= 10) {
            sumA = sumOfDigits(sumA);
        }
        while (sumB >= 10) {
            sumB = sumOfDigits(sumB);
        }
        //cout << sumB << endl;

        if (sumA == 0 && sumB == 0) {
            //cout << endl;
        } else {
            cout << fixed << setprecision(2) << (double(min(sumA, sumB))/max(sumA,sumB))*100 << " %" << endl;
        }
    }
}