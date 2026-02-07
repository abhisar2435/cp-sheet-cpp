#include <bits/stdc++.h>
using namespace std;

/* ---------- Typedefs ---------- */
using ll = long long;
using ull = unsigned long long;
using ld = long double;

/* ---------- Macros ---------- */
#define pb push_back
#define ff first
#define ss second
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,a,b) for(ll i=a;i<=b;i++)
#define rf(i,n) for(ll i=n-1;i>=0;i--)

/* ---------- Constants ---------- */
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;

/* ---------- Debug ---------- */
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

/* ---------- Math Utilities ---------- */
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

/* ---------- Solve ---------- */
void solve() {
    
}

/* ---------- Main ---------- */
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}