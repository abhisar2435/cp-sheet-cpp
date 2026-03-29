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
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(auto &x:a)cin>>x;
        if(n==2){ cout<<max(a[0],-1*a[1])<<endl;continue;}
        
        vector<ll>pf(n+1),sf(n);
        for(ll i=1;i<n;i++) pf[i+1]=pf[i]+abs(a[i]);
        for(ll i=n-1;i>=1;i--) sf[i-1]=sf[i]-a[i];
        ll ans=sf[0];
        for(ll i=1;i<n;i++) ans=max(ans,a[0]+pf[i]+sf[i]);
        cout<<ans<<endl;


    }
    return 0;
}