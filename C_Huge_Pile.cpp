#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        if (k > n) {
            cout << -1 << "\n";
            continue;
        }

        ll L = k, R = k;
        int time = 0;

        while (R < n) {
            L = 2 * L - 1;
            R = 2 * R + 1;
            time++;
            if (L > n) break;
        }

        if (L <= n && n <= R) cout << time << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}
