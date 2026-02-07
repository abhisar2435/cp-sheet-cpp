#include <bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve(){
    ll n,m;
    cin>>n>>m;
    multiset<ll>sw;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        sw.insert(a);
    }
    vector<pair<ll,ll>>a(m);
    ll ans=0;
    for(ll i=0;i<m;i++) cin>>a[i].first;
    for(ll i=0;i<m;i++) cin>>a[i].second;
    sort(a.begin(),a.end(),[](auto &p1,auto &p2){
        if(p1.first==p2.first) return p1.second<p2.second;
        return p1.first<p2.first;
    });
    for(ll i=0;i<m;i++){
        ll b=a[i].first,c=a[i].second;
        if(c==0) continue;
        auto it=sw.lower_bound(b);
        if(it==sw.end()) break;
        ll sword=*it;
        sw.erase(it);
        sw.insert(max(sword,c));
        ans++;
    }
    for(ll i=0;i<m;i++){
        ll b=a[i].first,c=a[i].second;
        if(c!=0) continue;
        auto it=sw.lower_bound(b);
        if(it==sw.end()) break;
        sw.erase(it);
        ans++;
    }
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