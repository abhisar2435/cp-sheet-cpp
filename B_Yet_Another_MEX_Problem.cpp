#include <bits/stdc++.h>
using namespace std;
using ll=long long ;
void solve(){
    ll n, k;
    cin>>n>>k;

    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    set<ll>st;

    for(ll i=0;i<=n+1;i++)st.insert(i);
    for(ll i:a) st.erase(i);
    auto it=*st.begin();
    cout<<min(it,k-1)<<endl;
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