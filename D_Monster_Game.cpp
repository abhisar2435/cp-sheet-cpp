// Problem Link : https://codeforces.com/problemset/problem/2193/D
#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(auto &x:a)cin>>x;
        for(auto &x:b) cin>>x;
        sort (a.begin(),a.end());
        for(ll i=1;i<n;i++) b[i]+=b[i-1];

        ll j=-1,ans=0;
        for(ll i=0;i<n;i++){
            ll cnt=n-i; // swords
            while(j<n-1 && b[j+1]<=cnt) j++; // prefix[j]<=swords
            while(j>=0 && b[j]>cnt) j--; // prefix[j]> swords
            ans=max(ans,a[i]*(j+1));
        }
        cout<<ans<<endl;
    }
    return 0;
}