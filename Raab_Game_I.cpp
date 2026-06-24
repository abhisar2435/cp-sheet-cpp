#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        if ((a == 0 && b > 0) ||
            (b == 0 && a > 0) ||
            (a + b > n)) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        vector<int> p(n), q(n);
        for (int i = 0; i < n; i++) {
            p[i] = i + 1;
        }
        int k = a + b;
        for (int i = 0; i < k; i++) {
            q[i] = ((i + a) % k) + 1;
        }

        for (int i = k; i < n; i++) {
            q[i] = i + 1;
        }
        for (int x : p) cout << x << " ";
        cout << "\n";
        for (int x : q) cout << x << " ";
        cout << "\n";
    }

    return 0;
}