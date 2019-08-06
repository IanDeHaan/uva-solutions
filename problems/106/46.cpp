#include <iostream>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int val(string card) {
    if (card[0] == 'A' || card[0] == 'K' || card[0] == 'Q' || card[0] == 'J' || card[0] == 'T') {
        return 10;
    } else {
        char c = card[0];
        return (int)(c-'0');
    }
}

int main() {
    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++) {
        stack<string> d;
        for (int i = 0; i < 52; i++) {
            string x;
            cin >> x;
            d.push(x);
        }
        queue<string> deck;
        while (!d.empty()) {
            deck.push(d.top());
            d.pop();
        }
        queue<string> hand;
        for (int i = 0; i < 25; i++) {
            hand.push(deck.front());
            deck.pop();
        }
        int y = 0;
        for (int iter = 0; iter < 3; iter++) {
            string top = deck.front();
            deck.pop();
            int x = val(top);
            //cout << x << endl;
            y += x;
            for (int i = 0; i < 10-x; i++) {
                deck.pop();
            }
        }
        //cout << "done moves" << endl;
        //cout << "deck size: " << deck.size() << endl;
        stack<string> remainingCards;
        while (!hand.empty()) {
            remainingCards.push(hand.front());
            hand.pop();
        }
        while (!deck.empty()) {
            remainingCards.push(deck.front());
            deck.pop();
        }
        
        //cout << "remaining cards size: " << remainingCards.size() << endl;
        //cout << "y: " << y << endl;
        for (int i = 0; i < y-1; i++) {
            remainingCards.pop();
        }
        cout << "Case " << cs << ": " << remainingCards.top() << endl;
    }
}