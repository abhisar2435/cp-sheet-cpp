#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;
    sort(a.begin(), a.end());
    long long median = a[n / 2];
    long long ans = 0;
    for (long long x : a) {
        ans += abs(x - median);
    }
    cout << ans << '\n';
}