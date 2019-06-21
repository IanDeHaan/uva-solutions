#include <iostream>
#include <queue>
using namespace std;

int main() {
    while (true) {
        int duration, records;
        double down, loanAmount;
        cin >> duration >> down >> loanAmount >> records;

        if (duration < 0) {
            break;
        }

        double carValue = down + loanAmount;
        double owed = loanAmount;
        double payEachMonth = loanAmount/duration;
        queue<pair<int, double>> deprec;
        double currDeprec = -1;
        for (int i = 0; i < records; i++) {
            int month;
            double pay;
            cin >> month >> pay;
            deprec.push(make_pair(month, pay));
        }
        for (int month = 0; month <= duration; month++) {
            if (month != 0) {
                // make payment
                owed -= payEachMonth;
            }
            if (deprec.size() > 0 && deprec.front().first == month) {
                currDeprec = deprec.front().second;
                deprec.pop();
            }
            carValue *= (1-currDeprec);
            if (carValue > owed) {
                cout << month << ' ';
                if (month == 1) {
                    cout << "month";
                } else {
                    cout << "months";
                }
                cout << endl;
                break;
            }
        }
    }
}