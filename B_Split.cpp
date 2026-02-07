#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(2*n);
    for(auto &x:a)cin>>x;
    map<ll,ll>mp;
    for(ll i:a) mp[i]++;
    ll x=0,y=0,z=0;
    for(auto p:mp){
        if(p.second &1) x++;
        else {
            if(p.second %4!=0) y++; 
            else z++;
        }
    }
    ll ans=x + 2*y + 2*z;
    if(z&1 && x==0) ans-=2;
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}