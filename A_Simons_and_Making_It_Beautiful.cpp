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
        ll maxi=0;
        for(ll i=0;i<n;i++) if(a[i]>a[maxi])maxi=i;

        ll temp=a[0];
        a[0]=a[maxi];
        a[maxi]=temp;
        for(ll i:a)cout<<i<<" ";
        cout<<endl;

    }
    return 0;
}