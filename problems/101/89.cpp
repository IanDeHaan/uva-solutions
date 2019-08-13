#include <iostream>
using namespace std;

int main() {
    int cs = 0;
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0) {
            return 0;
        }
        cs++;
        if (cs != 1) {
            cout << endl;
        }
        cout << "Field #" << cs << ':' << endl;

        char board[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == '*') {
                    cout << board[i][j];
                } else {
                    int cnt = 0;
                    // right
                    if (j < m-1 && board[i][j+1] == '*') {
                        cnt++;
                    }
                    // up right
                    if (j < m-1 && i > 0 && board[i-1][j+1] == '*') {
                        cnt++;
                    }
                    // up
                    if (i > 0 && board[i-1][j] == '*') {
                        cnt++;
                    }
                    // up left
                    if (i > 0 && j > 0 && board[i-1][j-1] == '*') {
                        cnt++;
                    }
                    // left
                    if (j > 0 && board[i][j-1] == '*') {
                        cnt++;
                    }
                    // down left
                    if (j > 0 && i < n-1 && board[i+1][j-1] == '*') {
                        cnt++;
                    }
                    // down
                    if (i < n-1 && board[i+1][j] == '*') {
                        cnt++;
                    }
                    // down right
                    if (i < n-1 && j < m-1 && board[i+1][j+1] == '*') {
                        cnt++;
                    }
                    cout << cnt;
                }
            }
            cout << endl;
        }
    }
}