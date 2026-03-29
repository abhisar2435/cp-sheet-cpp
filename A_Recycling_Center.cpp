#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n,c;
        cin>>n>>c;
        vector<ll>a(n);
        for(auto &x:a) cin>>x;
        ll cnt=0,saved=0;
        sort(a.rbegin(),a.rend());
        for(ll i:a) {
            if(i*(1ll<<saved)<=c) saved++;

        }
        cout<<n-saved<<endl;
    }
    return 0;
}