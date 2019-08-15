#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    while (true) {
        string inp;
        getline(cin, inp);
        if (inp == "Game Over") {
            break;
        }

        vector<char> scores;
        for (int i = 0; i < inp.size(); i++) {
            if (inp[i] == ' ') {
                continue;
            } else {
                scores.push_back(inp[i]);
            }
        }

        vector<int> frms;
        int frames = 0;
        int score = 0;
        bool first = true;
        bool itr = false;
        for (int i = 0; i < scores.size(); i++) {
            frms.push_back(frames);
            int roll = 0;
            if (scores[i] >= '0' && scores[i] <= '9') {
                // int
                roll = scores[i] - '0';
                if (first) {
                    first = false;
                } else {
                    first = true;
                    itr = true;
                }
            } else {
                // strike or spare
                itr = true;
                first = true;
                if (scores[i] == '/') {
                    roll = 10 - (scores[i-1] - '0');
                } else {
                    roll = 10;
                }
            }
            if (frames < 10) {
                score += roll;
            }
            if (i > 0 && (scores[i-1] == '/' || scores[i-1] == 'X') && frms[i-1] < 10) {
                score += roll;
            }
            if (i > 1 && scores[i-2] == 'X' && frms[i-2] < 10) {
                score += roll;
            }
            //cout << i << ' ' << score << ' ' << frames << endl;
            if (itr) {
                itr = false;
                frames++;
            }
        }
        cout << score << endl;
    }
}