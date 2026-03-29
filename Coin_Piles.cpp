// Problem Link : https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin>>a>>b;
        ll sum= a+b;
        if(sum%3!=0) {cout<<"NO\n";continue;}

        ll maxi=max(a,b);
        if(min(a,b) <maxi/2) {cout<<"NO\n";continue;}
        else cout<<"YES\n";
    }
    return 0;
}