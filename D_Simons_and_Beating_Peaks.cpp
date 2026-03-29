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
        ll i=0,j=n-1,cnt=0;
        while(i<=j){
            for(ll k=j;k>=i;k--){
                if(a[k]==n)
            }
        }        
    }
    return 0;
}