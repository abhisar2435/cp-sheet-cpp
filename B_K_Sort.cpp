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
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) cin>>a[i];


        
        ll pref_mx=0,s=0,mx=0;
        for(ll i=0;i<n;i++){
            pref_mx=max(pref_mx,a[i]);
            ll d= pref_mx-a[i];
            mx=max(mx,d);
            s+=d;
        }
        cout<<s+mx<<endl;


    }
    return 0;
}