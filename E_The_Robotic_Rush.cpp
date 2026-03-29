//Problem link:https://codeforces.com/problemset/problem/2185/E
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>a(n),b(m);
        for(auto &x :a)cin>>x;
        for(auto &x:b)cin>>x;
        string s;
        cin>>s;
        vector<ll>ans(k,n);
        for(ll i:ans)cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}