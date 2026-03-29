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
        for(auto &x: a)cin>>x;
        vector<ll>temp=a;
        sort(a.begin(),a.end());
        ll cnt=0;
        for(ll i=0;i<n;i++){
            if(a[i]==temp[i])cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}