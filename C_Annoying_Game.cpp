#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;


        vector<ll> dp(n);
        dp[0] = a[0];
        for (ll i = 1; i < n; i++) dp[i] = max(dp[i-1] + a[i], a[i]);

        ll ans = *max_element(dp.begin(), dp.end());

        if (k % 2 == 0) {
            cout << ans << '\n';
            continue;
        }

        
        vector<ll> dp1(n);
        dp1[n-1] = a[n-1];
        for (ll i = n-2; i >= 0; i--)
            dp1[i] = max(dp1[i+1] + a[i], a[i]);

        for (ll i = 0; i < n; i++) {
            ll curr = dp[i] + dp1[i] - a[i] + b[i];
            ans = max(ans, curr);
        }

        cout << ans << '\n';
    }
    return 0;
}
