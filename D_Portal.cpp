// Problem Link : 
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n,x,y;
        cin>>n>>x>>y;
        vector<ll>p(n);
        for(auto &v: p)cin>>v;
        vector<ll>a(p.begin(),p.begin()+x);
        vector<ll>b(p.begin()+x,p.begin()+y);
        vector<ll>c(p.begin()+y,p.end());
        





    }
    return 0;
}