// Problem Link : 
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
#define pb push_back
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
        ll n, k;
        cin >> n >> k;
        vll a(n), p(k);
        for(auto &x : a) cin >> x;
        for(auto &x : p) cin >> x;

        ll sp = p[0] - 1;
        ll x = a[sp]; 
        ll lb = 0;
        bool in_block = false;
        for(ll i = 0; i < sp; i++){
            if(a[i] != x && !in_block){ lb++; in_block = true; }
            else if(a[i] == x) in_block = false;
        }
        ll rb = 0;
        in_block = false;
        for(ll i = sp + 1; i < n; i++){
            if(a[i] != x && !in_block){ rb++; in_block = true; }
            else if(a[i] == x) in_block = false;
        }
        cout << 2 * max(lb, rb) << endl;
    }
    return 0;
}