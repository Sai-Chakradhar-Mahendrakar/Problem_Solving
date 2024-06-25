#include <bits/stdc++.h>
using namespace std;

void stockspan(int price[], int n, int span[]) {
    stack<int> s;
    s.push(0);
    span[0] = 1;

    for (int i = 1; i < n; i++) {
        int currentPrice = price[i];
        while (!s.empty() && price[s.top()] <= currentPrice) {
            s.pop();
        }

        if (!s.empty()) {
            int prev_highest = s.top();
            span[i] = i - prev_highest;
        } else {
            span[i] = i + 1;
        }

        s.push(i);
    }
}

int main() {
    int n;
    cin >> n;
    int price[n];
    int span[n];

    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    stockspan(price, n, span);
    for (int i = 0; i < n; i++) {
        cout << span[i] << " ";
    }
    return 0;
}
