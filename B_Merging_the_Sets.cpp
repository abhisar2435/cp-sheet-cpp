#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll>cnt(m);
    vector<vector<ll>>v(n);
    ll t=0;
    for(ll i=0;i<n;i++){
        ll l;
        cin>>l;
        v[i].resize(l);
        for(ll j=0;j<l;j++){
            ll x;
            cin>>x;
            x--;
            
            if(cnt[x]==0) t++;
            cnt[x]++;
            v[i][j]=x;

        }
    }
    ll ans=(t==m);
    for(ll i=0;i<n;i++){
        for(ll x:v[i]){
            cnt[x]--;
            if(cnt[x]==0) t--;
        }
        if(t==m) ans++;
        for(ll x:v[i]){
            if(cnt[x]==0) t++;
            cnt[x]++;
            
        }
    }
    cout<<(ans>=3 ?"YES":"NO")<<endl;
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