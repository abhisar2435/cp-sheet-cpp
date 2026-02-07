#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        sort(a.begin(), a.end());

       
        vector<long long> pref(n);
        pref[0] = b[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i-1] + b[i];

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long x = a[i];

            int k = a.end() - lower_bound(a.begin(), a.end(), x);

            int L = upper_bound(pref.begin(), pref.end(), k) - pref.begin();

            ans = max(ans, x * L);
        }

        cout << ans << "\n";
    }
}
