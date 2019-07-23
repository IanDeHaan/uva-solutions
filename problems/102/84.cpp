#include <iostream>
#include <string>
using namespace std;
char b[8][8];

bool set(int row, int col) {
    if (row < 0 || row > 7 || col < 0 || col > 7) {
        return false;
    }
    if (b[row][col] == 'o' || b[row][col] == 'x') {
        b[row][col] = 'x';
        return true;
    }
    return false;
}

int main() {
    string board;
    while (cin >> board) {
        
        int row = 0;
        int col = 0;
        for (char c : board) {
            //cout << c << ' ' << row << ' ' << col << endl;
            if (c == '/') {
                row++;
                col = 0;
            } else if ('0' <= c && c <= '9') {
                int num = c - '0';
                while (num > 0) {
                    b[row][col] = 'o';
                    col++;
                    num--;
                }
            } else {
                b[row][col] = c;
                col++;
            }
        }

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (b[i][j] == 'p') {
                    set(i+1, j-1);
                    set(i+1, j+1);
                } else if (b[i][j] == 'P') {
                    set(i-1, j-1);
                    set(i-1, j+1);
                } else if (b[i][j] == 'N' || b[i][j] == 'n') {
                    set(i-2, j+1);
                    set(i-2, j-1);
                    set(i+2, j-1);
                    set(i+2, j+1);
                    set(i+1, j+2);
                    set(i+1, j-2);
                    set(i-1, j+2);
                    set(i-1, j-2);
                } else if (b[i][j] == 'B' || b[i][j] == 'b') {
                    int move = 1;
                    while (set(i+move, j+move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i+move, j-move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i-move, j+move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i-move, j-move)) {
                        move++;
                    }
                } else if (b[i][j] == 'R' || b[i][j] == 'r') {
                    int move = 1;
                    while (set(i+move, j)) {
                        move++;
                    }
                    move = 1;
                    while (set(i-move, j)) {
                        move++;
                    }
                    move = 1;
                    while (set(i, j+move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i, j-move)) {
                        move++;
                    }
                } else if (b[i][j] == 'Q' || b[i][j] == 'q') {
                    int move = 1;
                    while (set(i+move, j+move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i+move, j-move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i-move, j+move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i-move, j-move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i+move, j)) {
                        move++;
                    }
                    move = 1;
                    while (set(i-move, j)) {
                        move++;
                    }
                    move = 1;
                    while (set(i, j+move)) {
                        move++;
                    }
                    move = 1;
                    while (set(i, j-move)) {
                        move++;
                    }
                } else if (b[i][j] == 'K' || b[i][j] == 'k') {
                    set(i+1, j);
                    set(i+1, j-1);
                    set(i+1, j+1);

                    set(i, j-1);
                    set(i, j+1);

                    set(i-1, j);
                    set(i-1, j-1);
                    set(i-1, j+1);
                }
            }
        }

        int out = 0;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (b[i][j] == 'o') {
                    out++;
                }
            }
        }
        cout << out << endl;
    }
    
}