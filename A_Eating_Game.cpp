
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
        if(n==1) {cout<<1<<endl;continue;}
        else {
            ll maxi=*max_element(a.begin(),a.end());
            ll cnt=0;
            for(ll i:a) if(i==maxi) cnt++;
            cout<<cnt<<endl;
        }
        

    }
    return 0;
}
