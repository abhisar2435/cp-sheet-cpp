#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        
        a[n-1] = max(a[n-1], b[n-1]);
        for (int i = n-2; i >= 0; i--) {
            a[i] = max({a[i], b[i], a[i+1]});
        }

        vector<long long> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i-1] + a[i];
        }


        while (q--) {
            int l, r;
            cin >> l >> r;
            long long ans = pref[r-1] - (l > 1 ? pref[l-2] : 0);
            cout << ans << " ";
        }
        cout << "\n";
    }
}
