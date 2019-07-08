#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void DFS(int s, vector<int> adjc[], int marked[], stack<int> &out) {
    
    if (marked[s]) return;
    //cout << "DFS ON " << s << endl;
    marked[s] = true;
    for (int i = 0; i < adjc[s].size(); i++) {
        DFS(adjc[s][i], adjc, marked, out);
    }
    out.push(s);
}

stack<int> topoSort(int n, vector<int> adjc[]) {
    int marked[n];
    for (int i = 0; i < n; i++) {
        marked[i] = false;
    }

    stack<int> out;
    for (int i = 0; i < n; i++) {
        //cout << i << endl;
        // DFS on this
        DFS(i, adjc, marked, out);
    }
    return out;
}

int main() {
    while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0) {
        return 0;
    }
    vector<int> adjc[n];
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adjc[x-1].push_back(y-1);
    }

    stack<int> order = topoSort(n, adjc);
    while (order.size() > 1) {
        cout << (order.top())+1 << ' ';
        order.pop();
    }
    cout << (order.top())+1 << endl;
    }
}