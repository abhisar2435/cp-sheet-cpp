#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll n = s.size();
        vector<ll> d(n);
        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            d[i] = s[i] - '0';
            sum += d[i];
        }
        if (sum <= 9) {
            cout << 0 << '\n';
            continue;
        }
        vector<pair<ll,ll>> v;
        for (ll i = 0; i < n; i++) {
            v.push_back({d[i], i});
        }
        sort(v.rbegin(), v.rend());

        ll e = sum - 9;
        ll moves = 0;

        for (auto [digit, idx] : v) {
            if (e <= 0) break;

            ll min_allowed = (idx == 0 ? 1 : 0);
            ll can_reduce = digit - min_allowed;
            if (can_reduce <= 0) continue;
            e -= can_reduce;
            moves++;
        }

        cout << moves << '\n';
    }
    return 0;
}