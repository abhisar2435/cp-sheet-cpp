#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll w, h, d, n;
    cin >> w >> h >> d;
    cin >> n;

    ll wp = __gcd(n, w);
    n /= wp;

    ll hp = __gcd(n, h);
    n /= hp;

    ll dp = __gcd(n, d);
    n /= dp;

    if (n != 1) {
        cout << -1 << "\n";
    } else {
        cout << wp - 1 << " " << hp - 1 << " " << dp - 1 << "\n";
    }
}
