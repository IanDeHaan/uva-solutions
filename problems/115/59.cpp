#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int b, h, w;
        cin >> b >> h >> w;
        int minPrice = 1e6;
        for (int i = 0; i < h; i++) {
            int price;
            cin >> price;
            for (int i = 0; i < w; i++) {
                int rooms;
                cin >> rooms;
                if (rooms >= n) {
                    minPrice = min(price, minPrice);
                }
            }
        }
        if (minPrice*n <= b) {
            cout << minPrice*n << endl;
        } else {
            cout << "stay home" << endl;
        }
    }
}