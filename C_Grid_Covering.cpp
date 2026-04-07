// Problem Link : https://codeforces.com/problemset/problem/2060/C
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define ppb pop_back
#define endl '\n'
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define fr(i,a,b) for(ll i=0;i<n;i++)
#define ff first
#define ss second
const int MOD = 1e9+7;
const int INF = 1e9;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--){
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        ll rn = n / __gcd(a, n);   
        ll rm = m / __gcd(b, m);
        ll g = __gcd(rn, rm);
        __int128 lcm_val = (__int128)(rn / g) * rm;
        __int128 NM = (__int128)n * m;
        __int128 index = NM / lcm_val;
        bool ok = (index == 1) || (index == 2 && g != 1);
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}