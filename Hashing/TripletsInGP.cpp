#include <bits/stdc++.h>
using namespace std;

int count_triplet(int a[], int r, int n) {
    unordered_map<long, long> right, left;

    for (int i = 0; i < n; i++) {
        right[a[i]]++;
        left[a[i]] = 0;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        right[a[i]]--;

        if (a[i] % r == 0) {
            long b = a[i];
            long a_val = a[i] / r;
            long c = a[i] * r;

            ans += left[a_val] * right[c];
        }
        left[a[i]]++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int r;
    cin >> r;

    int ans = count_triplet(a, r, n);
    cout << ans;
    return 0;
}
