#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef __int128_t int128;

bool check(ll f, int n, int k, ll W, const vector<ll>& a, const vector<ll>& b) {
    vector<ll> damages;
    damages.reserve(n);

    for (int i = 0; i < n; ++i) {
        int128 current_damage = (int128)a[i] * f - b[i];
        if (current_damage > 0) {
            damages.push_back((ll)current_damage);
        }
    }

    
    if (damages.size() > (size_t)k) {
        sort(damages.begin(), damages.end());
        
        int128 total_damage = 0;
        int keep_count = damages.size() - k;
        for (int i = 0; i < keep_count; ++i) {
            total_damage += damages[i];
            if (total_damage > W) return false;
        }
        return total_damage <= W;
    }

    return true; 
}

void solve() {
    int n, k;
    ll W;
    if (!(cin >> n >> k >> W)) return;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    ll low = 0, high = 2e12; 
    ll ans = 0;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (check(mid, n, k, W, a, b)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}