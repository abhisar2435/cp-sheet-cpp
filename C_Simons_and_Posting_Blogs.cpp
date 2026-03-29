// Problem Link :  NOT SOLVED
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
        vector<vector<ll>>a(n);
        for(ll i=0;i<n;i++){
            ll l;
            cin>>l;
            for(ll j=0;j<l;j++){
                ll x;
                cin>>x;
                a[i].push_back(x);
            }
            reverse(a[i].begin(),a[i].end());
        }
        
        sort(a.begin(),a.end());
        vector<ll> res;
        unordered_set<ll> st;
        for (ll i = 0; i < n; i++) {
            for (ll x : a[i]) {
                if (st.insert(x).second) { 
                    res.push_back(x);
                }
            }   
        }          

        for (ll x : res)
            cout << x << " ";   
        cout << endl;
        
    }
    return 0;
}