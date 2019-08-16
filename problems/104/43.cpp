#include <iostream>
using namespace std;

char board[100][100][2];
int n, m;



void updateSquare(int x, int y, int o) {
    // left
    if (x > 0) {
        char pos = board[x-1][y][o];
        if (pos == 'R' && board[x][y][o] == 'P') {
            board[x-1][y][(o+1)%2] = 'P';
        } else if (pos == 'P' && board[x][y][o] == 'S') {
            board[x-1][y][(o+1)%2] = 'S';
        } else if (pos == 'S' && board[x][y][o] == 'R') {
            board[x-1][y][(o+1)%2] = 'R';
        }
    }
    // right
    if (x < n-1) {
        char pos = board[x+1][y][o];
        if (pos == 'R' && board[x][y][o] == 'P') {
            board[x+1][y][(o+1)%2] = 'P';
        } else if (pos == 'P' && board[x][y][o] == 'S') {
            board[x+1][y][(o+1)%2] = 'S';
        } else if (pos == 'S' && board[x][y][o] == 'R') {
            board[x+1][y][(o+1)%2] = 'R';
        }
    }
    // up
    if (y > 0) {
        char pos = board[x][y-1][o];
        if (pos == 'R' && board[x][y][o] == 'P') {
            board[x][y-1][(o+1)%2] = 'P';
        } else if (pos == 'P' && board[x][y][o] == 'S') {
            board[x][y-1][(o+1)%2] = 'S';
        } else if (pos == 'S' && board[x][y][o] == 'R') {
            board[x][y-1][(o+1)%2] = 'R';
        }
    }
    // down
    if (y < m-1) {
        char pos = board[x][y+1][o];
        if (pos == 'R' && board[x][y][o] == 'P') {
            board[x][y+1][(o+1)%2] = 'P';
        } else if (pos == 'P' && board[x][y][o] == 'S') {
            board[x][y+1][(o+1)%2] = 'S';
        } else if (pos == 'S' && board[x][y][o] == 'R') {
            board[x][y+1][(o+1)%2] = 'R';
        }
    }
}

void fill(int o) {
    // use board[i][j][o] for curr positions
    // update board[i][j][(o+1)%2]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            board[i][j][(o+1)%2] = board[i][j][o];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            updateSquare(i, j, o);
        }
    }
}

int main() {
    int t;
    cin >> t;
    for (int cs = 0; cs < t; cs++) {
        if (cs != 0) {
            cout << endl;
        }
        cin >> n >> m;
        int turns;
        cin >> turns;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> board[i][j][0];
                board[i][j][1] = board[i][j][0];
            }
        }

        for (int i = 0; i < turns; i++) {
            fill(i%2);
        }
        // last i is turns-1, meaning our updated copy is in board[i][j][((turns-1%2)+1)%2] = board[i][j][turns%2]
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << board[i][j][turns%2];
            }
            cout << endl;
        }
    }
}