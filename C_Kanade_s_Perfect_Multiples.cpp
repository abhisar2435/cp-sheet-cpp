#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    set<ll>st;
    map<ll, ll>mp;
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(auto &x:a) cin>>x;
    st.clear();
    mp.clear();
    for(ll i:a){
        st.insert(i);
        mp[i]=1;
    }

    vector<ll>v;
    while(st.size()){
        ll x=*st.begin();
        st.erase(st.begin());
        v.push_back(x);
        for(ll y=x;y<=k;y+=x){
            if(!mp[y]){
                cout<<-1<<endl;
                return;
            }
            auto it=st.find(y);
            if(it!=st.end()) st.erase(it);

        }
    }
    cout<<v.size()<<endl;
    for( ll i :v) cout<<i<<" ";
    cout<<endl;
    return;
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
